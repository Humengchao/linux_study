#define SERVER_FIFO_NAME "/tmp/serv_fifo"
#define CLIENT_FIFO_NAME "/tmp/client_%d_fifo"
#define BUFFER_SIZE 132
struct data_to_pass {
    pid_t client_pid;
    char data[BUFFER_SIZE];
};
