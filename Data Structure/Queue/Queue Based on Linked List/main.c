#include <stdio.h>
#include <stdlib.h>

//Implementation of Queue Based on Linked List

typedef struct queueknode {
    QueueEntry entry;
    struct queuenode *next;
}QueueNode;

typedef struct queue {
    QueueNode *front;
    QueueNode *rear;
    int size;
}Stack;

void CreateQueue(Queue *pq) {
    pq->front = NULL;
    pq->rear = NULL;
    pq->size = 0;
}

void Append(QueueEntry e, Queue *pq) {
    QueueNode *pn = (QueueNode*)malloc(sizeof(QueueNode));
    if(!pn)
        return 0;
    else {
        pn->next = NULL;
    pn->entry = e;
    if(!pq->rear)
        pq->front = pn;
    else
        pq->rear->next = pn;
    pq->rear = pn;
    pq->size++;
    return 1;
    }
}

void Serve(QueueEntry *pe, Queue *pq) {
    QueueNode *pn = pq->front;
    *pe = pn->entry;
    pq->front = pn->next;
    free(pn);
    if(!pq->front)
        pq->rear = NULL;
    pq->size--;
}

int QueueFull(Queue *pq) {
    return 0;
}

int QueueEmpty(Queue *pq) {
    return !pq->front;
}

int QueueSize(Queue *pq) {
return pq->size;
}

void ClearQueue(Queue *pq) {
while(pq->front){
        pq->rear = pq->front->next;
        free(pq->front);
        pq->front = pq->rear;
}
pq->size = 0;
}

void TraverseQueue(Queue *pq, void(*pf)(QueueEntry)) {
for(QueueNode *pn = pq->front; pn; pn=pn->next){
    (*pf)(pn->entry);
}
}

void Display(StackEntry e)
{
    printf(e is: %d\n,e);
}

void main(){
Queue q;
CreateQueue(&q);
Append(e, &q);
Serve(&e, &q);
QueueFull(&q);
QueueEmpty(&q);
QueueSize(&q);
ClearQueue(&q);
TraverseQueue(&q, &Display);
}
