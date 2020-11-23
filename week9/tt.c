#include "ch02.h"

int main()
{
        time_t now;
    struct tm *ptm;
    //time() returns the time as the number of seconds since the Epoch,
    //1970-01-01 00:00:00 +0000 (UTC)
    //这里只能得到当前距离某个时间的总秒数，需要进一步转换
    time (&now);
    //获取当地日期和时间
    ptm = localtime (&now);
    //将转换后的时间以字符串形式显示
    printf ("now: %s", asctime(ptm));


return 0;
}
