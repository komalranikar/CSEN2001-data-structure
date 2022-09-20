#include <stdio.h>
void printarray(int *arr, int n){
  for(int i=0;i<n;i++){
    printf("%d", arr[i]);
    printf(" ");
  }
  printf("\n");
}
void selectionsort(int *arr, int n){
  int indexofmin,j,temp;
  for(int i=0;i<n-1;i++){
    indexofmin=arr[i];
    for(j=i+1;j<n;j++){
      if(arr[j]<arr[indexofmin]){
        indexofmin=j;
      }
      
    }
    
  temp=arr[i];
  arr[i]=arr[indexofmin];
  arr[indexofmin]=temp; 
}}
int main(){
  int n;
  int arr[]={389,21,235,1374,1461,1731};
  n=sizeof(arr)/sizeof(int);
  printf("Array before sorting:-\n");
  printarray(arr,n);
  selectionsort(arr,n);
  printf("Array after sorting in ascending orde:-\n");
  printarray(arr,n);
return 0;
}