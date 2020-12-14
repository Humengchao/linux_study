#include "ch02.h"
#include "w13.h"

int main()
{
    int server_fifo_fd, client_fifo_fd;
    struct data_to_pass my_data;
    int nbytes;
    char client_fifo_name[256], *tmp_char_ptr;

    // 创建并打开服务FIFO
    mkfifo(SERVER_FIFO_NAME, 0777);
    if (server_fifo_fd == -1)
        err_exit("Server fifo failure");
    do {
        // 接收来自客户端请求
        nbytes = read(server_fifo_fd, &my_data, sizeof(my_data));
        if (nbytes > 0)
        {
            // 对客户端请求进行处理
            tmp_char_ptr = my_data.data;
            while (*tmp_char_ptr)
            {
                if (isupper(*tmp_char_ptr))
                    *tmp_char_ptr = tolower(*tmp_char_ptr);
                else if (islower(*tmp_char_ptr))
                    *tmp_char_ptr = toupper(*tmp_char_ptr);
                else if (*tmp_char_ptr == '\n')
                    *tmp_char_ptr = '\0';
                tmp_char_ptr++;
            }
            // 将处理后的数据送回给客户，为此根据客户端进程ID确定回答所用FIFO
            sprintf(client_fifo_name, CLIENT_FIFO_NAME, my_data.client_pid);
            client_fifo_fd = open(client_fifo_name, O_WRONLY);
            if (client_fifo_fd != -1)
            {
                write(client_fifo_fd, &my_data, sizeof(my_data));
                close(client_fifo_fd);
            }
            }
    } while (nbytes > 0);
    close(server_fifo_fd);
    unlink(SERVER_FIFO_NAME);
    return 0;
}
