// Binary Search in C

#include <stdio.h>


int binarySearch(int array[], int element, int low, int high) {
  // Repeat until the pointers low and high meet each other
 /* while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;*/
   int  mid;

    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(array[mid] == element){
            return mid;
        }
//        if(array[low] == element){
//            return low;
//        }
//        if(array[high] == element){
//            return high;
//        }

        if(array[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;

}

int main(void) {
    int n,i,x;

    printf("Enter the Array size : ");
    scanf("%d", &n);
     int array[n];
    printf("Enter the Array Elemnts : ");
    for(i=0; i<n; i++){
         scanf("%d", &array[i]);
    }
    printf("Enter the Element you  want to search : ");
    scanf("%d", &x);

    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
    printf("Not found");
    else
    printf("Element is found at index %d", result);
     // to store the execution time of code

    return 0;
}
