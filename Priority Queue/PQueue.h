#ifndef PQUEUE_H
#define PQUEUE

typedef int qItem;
struct queue{
	qItem *items;	
	int size;
	int head;
	int tail;
	int count;
};

typedef struct queue *Queue;

Queue newQueue(int size);
void destroy(Queue *q);
void display(const Queue q);
void enqueue(Queue q, qItem item);
void dequeue(Queue q);
int isEmpty(Queue q);
int isFull(Queue q);
void clear(Queue q);
int head(Queue q);
int tail(Queue q);

#endif
