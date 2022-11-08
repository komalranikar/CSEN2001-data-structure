#include <stdio.h>
int binarysearch(int arr[], int size, int element) {
  int low, mid, high;
  low = 0;
  high = size - 1;
 
  while (low <= high) {
     mid = (low + high) / 2;
    if (arr[mid] == element) {
      return mid;
    }
    if (arr[mid] < element) {
      low = mid + 1;
    } 
    else {
      high = mid - 1;
    }
  }
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
  
  searchindex=binarysearch(arr,size,element);
  if (searchindex==-1){
    printf("Element not found!");
  }
  else{
    printf("Element %d is found at index %d",element,searchindex);
    }
  return 0;
}
