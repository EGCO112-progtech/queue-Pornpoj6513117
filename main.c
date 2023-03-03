#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
   NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
 //For struct Queue
  Queue  q;
   q. headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,x,cash,chane;
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q);
          if(x>0){
            printf("\nYou have to pay %d",x);
            do{
              printf("\nCash : ");
              scanf("%d",&cash);
            }while(cash<x);
            printf("Thank you");
            chane=cash-x;
            if(x==cash) break;
              else  printf("change is %d",chane);
            
          }
        }
        else {
        enqueue_struct(&q, atoi(argv[i]), atoi(argv[i+1]));
           i++;
        }
 }
  return 0;
}
