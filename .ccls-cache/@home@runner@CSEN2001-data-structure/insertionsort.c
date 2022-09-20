#include <stdio.h>
void printarray(int *arr, int n){
  for(int i=0;i<n;i++){
    printf("%d", arr[i]);
    printf(" ");
  }
  printf("\n");
}
void insertionsort(int *arr, int n){
  int key,j;
  for(int i=0;i<=n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}
int main(){
  int n;
  int arr[]={42,23,74,11,65,58,94,36,99,87 };
  n=sizeof(arr)/sizeof(int);
  printf("Array before sorting:-\n");
  printarray(arr,n);
  insertionsort(arr,n);
  printf("Array after sorting in ascending orde:-\n");
  printarray(arr,n);
return 0;
}