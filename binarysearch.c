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

int main() {
  int arr[] = {1, 3, 5, 56,67, 489, 2399, 4545, 5634};
  int size =sizeof(arr)/sizeof(int);
  int element = 489;
  int searchindex = binarysearch(arr, size, element);
  printf("element %d is found at index %d", element,searchindex);
  return 0;
}
