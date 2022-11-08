#include<stdio.h>

#include<stdlib.h>



struct node{

int data;

struct node *next;

};
struct node*head;



void beginsert(){

struct node *ptr;

int item;

ptr=(struct node*)malloc(sizeof(struct node*));

if(ptr==NULL){

printf("OVERFLOW\n");

  }

else{

printf("Enter Value:-\n");

scanf("%d",&item);

ptr -> data =item;

ptr -> next = head;

head=ptr;

printf("Node Inserted\n");

}

}