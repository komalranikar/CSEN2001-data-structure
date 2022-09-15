#include<stdio.h>
struct student{
  int Roll_no;
  char Name[30];
  int Grade;
  int Adhar_no;
};
struct adhar{
  int Adhar_no;
  char Bank_name[20];
  char Branch[30];
};
struct bank{
  char Bank_name[20];
  char Branch[20];
  int Account_no;
  int Balance;
};


int main(){
  int i,j,k;
  struct student slist[5];
  printf("Enter 5 Student details:-Roll number, Name, Grade, Adhar number:-\n");
  for(i=0;i<5;i++){
    printf("Enter details of student number %d\n",i+1);
    scanf("%d",&slist[i].Roll_no);
    scanf("%s",&slist[i].Name);
    scanf("%d",&slist[i].Grade); 
    scanf("%d",&slist[i].Adhar_no); 
}
  struct adhar alist[5];
  printf("%s","Enter adhar details:- Adhar number,Bank name, Branch\n");
  for(j=0;j<5;j++){
    printf("Enter adhar details of student number %d\n",j+1);
    scanf("%d",&alist[j].Adhar_no);
    scanf("%s",&alist[j].Bank_name);
    scanf("%s",&alist[j].Branch);
  
  }
  struct bank blist[5];
  printf("%s","Enter bank details:- Bank name, Branch, Account number, Balance\n");
  for(k=0;k<5;k++){
    printf("Enter bank details of student number %d\n",k+1);
    scanf("%s",&blist[k].Bank_name);
    scanf("%s",&blist[k].Branch);
    scanf("%d",&blist[k].Account_no);
    scanf("%d",&blist[k].Balance); 
  }
}