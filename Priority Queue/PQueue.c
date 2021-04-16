#include <stdio.h>
#include <stdlib.h>
#include "PQueue.h"

Queue newQueue(int size){
	Queue q  = (Queue)malloc(sizeof(struct queue));
	q->items = (qItem *)malloc(sizeof(qItem)*size);
	q->size = size;
	q->head = 0;
	q->tail = 0;
	q->count = 0;
	return q;
}

void destroy(Queue *q){
	free((*q)->items);
	free(*q);
	*q=NULL;
}

void display(const Queue q){
	printf("\nELEMENTS IN QUEUE : ");
	int i=q->head;
	int j;
	for( j=0 ; j < q->count ; j++){
		printf("%d ",q->items[i]);
		i = next(q,i);
	}
}

int next(Queue q,int pos){
	return (pos+1)%q->size;
}

void enqueue(Queue q, qItem item){
	if( q->count < q->size ){
		q->items[q->tail] = item;
		q->tail = next(q,q->tail);
		q->count++;
	}
	else{
		printf("\nQueue is FULL CANNOT ENQUEUE");
	}
}

void dequeue(Queue q){
	if( q->count != 0 ){
		q->head = next(q,q->head);
		q->count--;
	}
}

int isEmpty(Queue q){
	return q->count == 0;
}

int isFull(Queue q){
	return q->count == q->size;
}

void clear(Queue q){
	q->count = q->head = q->tail = 0;
}

int head(Queue q){
	return q->items[q->head];
}

int tail(Queue q){
	return q->items[q->count-1];
}

