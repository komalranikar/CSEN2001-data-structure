#include<stdio.h>
struct node{
int add;
struct node *pointer;
}*tos=NULL,*tos1,*var;

//Function to push element on the stack.
int pushop(int ele){
  if(tos==NULL){
    tos=(struct node*)malloc(1*sizeof(struct node));
    tos->pointer=NULL;
    top->add=ele;
  }
  else{
    var=(struct node*)malloc(1*sizeof(struct node));
    var->pointer=tos;
    var->add=ele;
    tos=var;
  }
}

int popop(){
  tos1=tos;
  if(tos1==NULL){
    printf("UNDERFLOW");
    return;
  }
  else{
    tos1=tos1->pointer;
    printf("Deleted item:-%d",tos->add);
    free(tos);
    tos=tos1;
  }
}

int show(){
  tos1=tos;
  if(tos1==NULL){
    printf("Stack is Empty.");
    return;
  }
  while(tos1!=NULL){
    printf("%d",tos->add);
    tos1=tos1->pointer;
  }
}

int main(){
  int element,choice;
  while(choice==1){
  printf("\n*********Main Menu*********\n");
  printf("\nChoose one Operation from the following list ...\n");
  printf("\n===============================================\n");
  printf("Select 1 --- IF YOU WANT TO PUSH AN ELEMENT IN THE STACK\n");
  printf("Select 2 --- IF YOU WANT TO POP AN ELEMENT FROM STACK\n");
  printf("Select 3 --- IF YOU WANT TO DISPLAY THE CONTENTS OF THE STACK\n");
  printf("Select 4 --- IF YOU WANT TO EXIT\n");
  printf("\n===============================================\n");
  printf("Enter your choice:-\n");
  scanf("%d",&choice);
  switch(choice){
    case 1:
    printf("Enter element:-");
    scanf("%d",&element);
    pushop(element);
    break;

    case 2:
    popop();
    break;

    case 3:
    show();
    break;

    case 4:
    exit(0);

    default:
    printf("Invalid choice");
    break;
  }
}
}