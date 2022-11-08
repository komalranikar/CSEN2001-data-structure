#include<stdio.h>
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
  int arr[10],i,size,element,searchindex;
  size=sizeof(arr)/sizeof(int);
  printf("Enter the elements:-");
  for(i=0; i<size; i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element you want to search:-");
  scanf("%d",&element);
  
  searchindex=linearSearch(arr,size,element);
  if (searchindex==-1){
    printf("Element not found!");
  }
  else{
    printf("Element %d is found at index %d",element,searchindex);
    }
  return 0;
}