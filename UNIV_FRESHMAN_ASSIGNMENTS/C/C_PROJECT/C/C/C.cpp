#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct QUEUE {

    int *buf;
    int size;
    int front;
    int back;


}Queue;//global variable
bool Queue_full();
bool Queue_empty();
void create_Queue(const int size)
{
    Queue.buf = (int*)malloc(size * sizeof(int));
    Queue.size = size;
    Queue.front = -1;
    Queue.back = -1;
}
void release_Queue()
{
    free(Queue.buf);
    Queue.size = 0;
    Queue.front = -1;
    Queue.back = -1;
}
void enqueue(const int val) {

    if (Queue_full())
    {
        printf("enqueue() : Queue is full!\n");
        return;
    }
    if (Queue.back==-1)
    {
        Queue.front++;
    }
    Queue.back++;
    Queue.buf[Queue.back] = val;
    printf("enqueue[%d] : %d\n", Queue.back,val);
}
int dequeue() {

    if (Queue_empty())
    {
        printf("dequeue() : Queue is empty!!\n");
    }
    
    int val = Queue.buf[Queue.front];
    printf("dequeue[%d] : %d\n", Queue.front, val);
    Queue.front++;

    return val;
}
bool Queue_full() {
    
    return Queue.back >= Queue.size - 1;
}
bool Queue_empty() {
    
    return Queue.front> Queue.back;
}
void writefile()
{
    FILE* pfile;
    pfile = fopen("text.txt", "r");
    char a[10];
    char b[10];
    char c[10];
    while (fscanf(pfile, "%s %s %s", a, b, c)!=3)
    {

    }


}
int main()
{
    create_Queue(10);
    int val = 10;
    
    while (!Queue_full())
    {
        enqueue(val);
        val += 10;
    }
    while (!Queue_empty())
    {
        val = dequeue();
    }
    
    release_Queue();
    return 0;
}