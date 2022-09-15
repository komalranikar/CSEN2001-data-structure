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
  printf("%s","Enter Student details:-\n");
  for(i=0;i<5;i++){  scanf("%d,%s,%d,%d",&slist[i].Roll_no,&slist[i].Name,&slist[i].Grade,&slist[i].Adhar_no);
}
  struct adhar alist[5];
  printf("%s","Enter adhar details\n");
  for(j=0;j<5;j++){
    scanf("%d,%s,%s",&alist[j].Adhar_no,&alist[j].Bank_name,&alist[j].Branch);
  }
  struct bank blist[5];
  printf("%s","Enter bank details\n");
  for(k=0;k<5;k++){
    scanf("%s,%s,%d,%d",&blist[k].Bank_name,&blist[k].Branch,&blist[k].Account_no,&blist[k].Balance);
  }
}