#include<stdio.h>
struct Ano{
    char branch[5][20];
    char bank[5][20];
};
struct Branch{
    int a[5][2];
    };
struct bank
{
    struct Branch Branch;
    struct Ano Ano;
    int  A[5][3];
    char name[5][20];  
};
int main()
{
    int i;
    struct bank a;
      for(i=0;i<5;i++)
      {
      scanf("%s",a.name[i]);
      scanf("%d",&a.A[i][0]);
      scanf("%d",&a.A[i][1]);
      scanf("%d",&a.A[i][2]);
      scanf("%s",&a.Ano.bank[i]);
      scanf("%s",&a.Ano.branch[i]);
      scanf("%d",&a.Branch.a[i][0]);
      scanf("%d",&a.Branch.a[i][1]);
    }
}