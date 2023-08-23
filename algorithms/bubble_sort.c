#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp; 
}

void bubble_sort(int *arr, int len) {
  int i;
  int j;

  for (i = 0; i < len; ++i) {
    for (j = 0; j < len - i - 1; ++j) {
      if (arr[j] > arr[j+1]) {
        swap(&arr[j], &arr[j+1]);
      }
    }
  }
}

int main(void) {

  int i;
  int arr[5] = {5,4,3,2,1};
  int len = sizeof(arr) / sizeof(arr[0]);

  printf("Array before sorting: ");

  for (i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  bubble_sort(arr, len);

  printf("Array after sorting: ");

  for (i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");


  return 0;
}
