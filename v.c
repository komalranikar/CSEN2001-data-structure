#include<stdio.h>
#include<string.h>
int main()
{
  int r1,r2,r3,r4,r5,i;
  char name[5][20];
  int g1,g2,g3,g4,g5;
  int am1,am2,am3,am4,am5;
  printf("Enter all the r values : \n");
  scanf("%d",&r1);scanf("%d",&r2);scanf("%d",&r3);scanf("%d",&r4);scanf("%d",&r5);
  printf("Enter all the strings : ");
  for (i=0;i<5;i++)
  {
    scanf("%s",name[i]);     
  }
  printf("Enter all the g values : \n");
  scanf("%d",&g1);scanf("%d",&g2);scanf("%d",&g3);scanf("%d",&g4);scanf("%d",&g5);
  printf("Enter all the am values :\n");
  scanf("%d",&am1);scanf("%d",&am2);scanf("%d",&am3);scanf("%d",&am4);scanf("%d",&am5);
  printf("The values of r are : \n");
  printf("%d\t",r1);printf("%d\t",r2);printf("%d\t",r3);printf("%d\t",r4);printf("%d\n",r5);
  printf("The strings are : \n");
  for (i=0;i<5;i++)
  {
    printf("%s\n",name[i]);     
  }
  printf("The values of g are  : \n");
  printf("%d\t",g1);printf("%d\t",g2);printf("%d\t",g3);printf("%d\t",g4);printf("%d\n",g5);
  printf("The values of am are : \n");
  printf("%d\t",am1);printf("%d\t",am2);printf("%d\t",am3);printf("%d\t",am4);printf("%d\t",am5);
}