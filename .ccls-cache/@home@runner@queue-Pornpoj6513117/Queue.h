#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#define PRICE_1 100
#define PRICE_2 50
#define PRICE_3 20
typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->data=x;  
    new_node->nextPtr=NULL;
    if(q->headPtr==NULL) q->headPtr=new_node;
        else(q->tailPtr)->nextPtr=new_node;   
    q->tailPtr=new_node;    
    q->size++;
    
 }
}

int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
 // int price;
   if(t/*q->size>0*/){
    /* swith(t->ordernumber){
       case 1:printf("Ramen");
         price=PRICE_1*t->qty;
        break;
       case 2:printf("Somtum");
        break;
       case 3:printf("KFC");
        break;
     }*/
   int value= t->data;
     q->headPtr=t->nextPtr;
     if(q->headPtr==NULL)
       q->tailPtr=NULL;
     q->size--;
     free(t);
        
       /*Finish dequeue */
   return value;
   }
   printf("Empty queue");
   return 0;
}

