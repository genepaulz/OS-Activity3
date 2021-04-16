#include <stdio.h>
#include <stdlib.h>
#include "PQueue.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Queue q = newQueue(10);
	enqueue(q,1);
	enqueue(q,2);
	enqueue(q,3);
	enqueue(q,4);
	enqueue(q,5);
	enqueue(q,6);
	display(q);
	printf("\nHead : %d",head(q));
	printf("\nTail : %d",tail(q));
	dequeue(q);
	display(q);
	if( isEmpty(q) )
		printf("\nQueue is EMPTY");
	else printf("\nQueue is !EMPTY");
	if( isFull(q) )
		printf("\nQueue is FULL");
	else printf("\nQueue is !FULL");
	clear(q);
	if( isEmpty(q) )
		printf("\nQueue is EMPTY");
	else printf("\nQueue is !EMPTY");
	display(q);
	
	printf("\n\n\nOTHER TESTING");	
	enqueue(q,1);
	enqueue(q,2);
	enqueue(q,3);
	enqueue(q,4);
	enqueue(q,5);
	enqueue(q,6);
	enqueue(q,7);
	enqueue(q,8);
	enqueue(q,9);
	enqueue(q,10);
	display(q);
	printf("\nHead : %d",head(q));
	printf("\nTail : %d",tail(q));
	if( isFull(q) )
		printf("\nQueue is FULL");
	else printf("\nQueue is !FULL");
	enqueue(q,10);
	return 0;
}
