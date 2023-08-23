#include <stdio.h>

int binary_search(int *arr, int len, int target) {

  int left = 0;
  int right = len - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (target == arr[mid]) {
      return mid;
    }
    else if (target < arr[mid]) {
      right = mid - 1; 
    } 
    else if (target > arr[mid]) {
      left = mid + 1;
    }
  }

  return -1;
}


int main(void) {

  int len = 5;
  int arr[] = {1,2,3,4,5};
  
  for (int i = 0; i < len; i++) {
    printf("Element %d: %d\n", i, arr[i]);
  }

  int index = binary_search(arr, len, 2);

  if (index != -1) {
    printf("Element found at index %d\n", index);
  }
  else {
    printf("Element not found\n");
  }

  return 0;
}
