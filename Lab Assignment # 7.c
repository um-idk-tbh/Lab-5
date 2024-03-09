#include <stdio.h>

void swap(int* arr, int i, int j){
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}

void bubbleSort(int arr[], int n){
int i, j;
for (i = 0; i < n - 1; i++){
for (j = 0; j < n - i - 1; j++){
if (arr[j] > arr[j + 1]){
swap(arr, j, j + 1);
}
}
}
}

void printArray(int arr[], int size){
int i;
for (i = 0; i < size; i++){
printf("%d ", arr[i]);
}
printf("\n");
}

int main(){
int arr1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
int arr2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
int N1 = sizeof(arr1) / sizeof(arr1[0]);
int N2 = sizeof(arr2) / sizeof(arr2[0]);

bubbleSort(arr1, N1);
bubbleSort(arr2, N2);

printf("Sorted array1: ");
printArray(arr1, N1);
printf("Sorted array2: ");
printArray(arr2, N2);

return 0;
}