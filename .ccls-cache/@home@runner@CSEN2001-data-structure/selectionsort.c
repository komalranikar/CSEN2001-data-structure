#include<stdio.h>
void printArray(int* arr, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int *arr, int size){
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < size-1; i++){
        indexOfMin = i;
        for (int j = i+1; j < size; j++){
            if(arr[j] < arr[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

int main(){
  int arr[] = {243,389,123,873,650};
  int size = 5;
  printArray(arr, size);
  selectionSort(arr, size);
  printArray(arr,size);
  return 0;
}