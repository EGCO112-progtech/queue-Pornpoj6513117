//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef Node_h
#define Node_h

struct node
{
    int data,order_number;
    struct node *nextPtr;
    int qty;
};

typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int x){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){   
    new_node->data=x;  
    new_node->nextPtr=NULL;
    if(*head==NULL) *head=new_node;
        else(*tail)->nextPtr=new_node;   //แค่ต่อหางแถว
    *tail=new_node;       //เป้นหาง
    /* Finish queue*/
 }
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
   int value= t->data;
     *head=(*head)->nextPtr;
     if(!(*head)) *tail=NULL;
     free(t);
   /* Finish dequeue*/
       
       
   return value;
   }
   printf("Empty queue");
   return 0;
}



#endif
