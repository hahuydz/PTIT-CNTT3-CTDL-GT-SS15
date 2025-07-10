#include <stdio.h>
#include <stdlib.h>

#define MAX 100
typedef struct Queue {
    int array[MAX];
    int front;
    int rear;
    int cap;
}Queue;

Queue* createQueue(int cap) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = 0;
    queue->rear = -1;
    queue->cap = cap;
    return queue;
}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
