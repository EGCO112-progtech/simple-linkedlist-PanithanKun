//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
 /* int c = 5;
  struct node a,z, b, d, *head;
  typedef struct node *NodePtr;
  NodePtr tmp = head;
  NodePtr a =(NodePtr)malloc(sizeof(NodePtr));
  a.value = c;
  a.next = &b;
  head = &a;
  b.value = head->value + 3; 

  printf("%d\n", head->value);       // what value for 5
  printf("%d\n", head->next->value); // what value for 8 */

  /*  Exercise I
      1. Add 1 more than at the end
      2. Add value(11)
      3. Make next become NULL
   */
/* b.next = &d;
  d.value = 11;
  d.next = NULL;
  printf("%d\n", d.value);
  printf("%d\n", b.next->value);
  printf("%d\n", a.next->next->value);
  printf("%d\n", head->next->next->value);*/

  /*  Exercise II
          1. Add 1 more than at the begining!!!!
          2. Add value (2)
  */
/* z.next = &a;
  head = &z;
  z.value = 2;
  printf("%d->",head->value);
  printf("%d->",head->next->value);
  printf("%d->",head->next->next->value);
  printf("%d->NULL\n",head->next->next->next->value);*/
  
   // add temp value to faciliate

  /*  Exercise III Use loop to print everything*/
    /*  int i,n=4;
      for(i=0;i<n;i++){
        
          printf("%3d->", tmp->value);
        tmp=tmp->next;
        // What is missing???
      }
  printf("NULL\n");*/
  

  /*  Exercise IV change to while loop!! (you can use NULL to help) */
   /*   tmp = head;
        while(tmp!=NULL){
          
           printf("%3d->", tmp->value);
          tmp=tmp->next;
          // What is missing???
       }
    printf("NULL\n"); */

  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
          //use a loop to help*/
  int c = 5;
  struct node b, d, *head;
  typedef struct node *NodePtr;
  typedef struct node Node;
  NodePtr tmp = head;
  NodePtr p =(NodePtr)malloc(sizeof(Node));
  head =p;
  p->value = c;
  int i,n=4;
      for(i=0;i<n;i++){
        p->next=(NodePtr)malloc(sizeof(Node));
        p=p->next;
        p->value = c+(i*3);
        p->next=NULL;
      }
 p=head;
  while(p!=NULL)
  {
        printf("%3d->",p->value);
       if(p->next==NULL)
       {
         printf("NULL\n");
       }
        p=p->next;
    
  }
    /*  Exercise VI Free all node !!*/
       //use a loop to help
  p=head;
  tmp=p;
  while(tmp!=NULL)
  {
    printf("deleting %d\n",p->value);
    p=tmp->next;
    free(tmp);
    tmp=p;
    
  }
  return 0;
}
