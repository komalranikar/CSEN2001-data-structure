#include<stdio.h>
#include<string.h>
int main()
{
    int rollno,grade,Ano;
    char name[10];
    printf("Enter the roll no : ");
    scanf("%d",&rollno);
    printf("Enter the grade : ");
    scanf("%d",&grade);
    printf("Enter the Acocunt no : ");
    scanf("%d",&Ano);
    printf("Enter the name : ");
    scanf("%s",name);
    printf("\nRollno is  : %d\n",rollno);
    printf("grade is  : %d\n",grade);
    printf("Account no is  : %d\n",Ano);
    printf("Name is  : %s\n",name);
}