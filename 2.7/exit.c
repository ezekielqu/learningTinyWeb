/*
    #include <stdlib.h> C语言标准库
    void exit(int status);

    #include <unistd.h> Linux系统函数
    void _exit(int status);

    status参数：是进程退出时的一个状态信息。父进程回收子进程资源的时候可以获取到。
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    printf("hello\n"); // \n会自动刷新缓冲区
    printf("world"); // 使用 _exit(0)没有刷新缓冲区，world打印不出来

    // exit(0); 和return中的0一样，return不会执行
    _exit(0);
    
    return 0;
}