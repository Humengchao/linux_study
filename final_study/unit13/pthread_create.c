#include "ch13.h"
#define NUM_THREADS 7

void Hello(void *t) {
    pthread_t my_tid;
    my_tid = pthread_self();
    printf("\tThread %d: my tid is %lx, Hello, World!\n", t, my_tid);
}

int main() {
    pthread_t tid;
    int t;
    for (t = 0; t < NUM_THREADS; t++) {
        pthread_create(&tid, NULL, (void *(*)())Hello, (void*)t);
        printf("Create thread %lx\n", tid);
    }
    printf("Goodbye\n");
    pthread_exit(NULL); // 终止线程
}
