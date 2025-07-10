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
    queue->cap = cap;
    queue->rear = -1;
    queue->front = 0;
    return queue;
}

int isEmpty(Queue* queue) {
    return queue->rear < queue->front;
}

int isFull(Queue* queue) {
    return queue->rear >= queue->cap - 1;
}

void enQueue(Queue* queue, int data) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    queue->array[++queue->rear] = data;
}

void show(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d\t", queue->array[i]);
    }
}

int main(void) {
    Queue* queue = createQueue(100);
    for (int i = 1; i <= 6; i++) {
        enQueue(queue, i);
    }
    show(queue);
    return 0;
}
