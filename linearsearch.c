#include<stdio.h>
int linearsearch(int arr[],int size,int element){
  for(int i=0;i<size;i++){
    if(arr[i]==element){
      return i;
    }
  }
}
int main(){
  int arr[]={1,3,5,56,4,3,23,5,4,545,56,34};
  int size= sizeof(arr)/sizeof(int);
  int element=48;
  int searchindex=linearsearch(arr,size,element);
  printf("element %d is found at index %d",element,searchindex);
  return 0;
}