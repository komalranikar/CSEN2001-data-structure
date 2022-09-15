#include<stdio.h>
int main()  
{
  // printing 3d array in matrix
  int ar[3][3],br[3][3],cr[3][3],i,j,k;
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
          printf("enter a[%d][%d] : ",i,j);
          scanf("%d",&ar[i][j]);
          // printf("%d\t",ar[i][j]);
        }
    }
  printf("Slno.\t name\t marks\t");
  for(i=0;i<3;i++)
  {
    printf("\n");
      for(j=0;j<3;j++)
        {
          printf("%d\t\t",ar[i][j]);
        }
    }
  }