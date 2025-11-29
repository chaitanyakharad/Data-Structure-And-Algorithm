#include <stdio.h>

// Merge two subarrays L and  R into arr
void merge(int a[], int top, int mid, int bottom) {

  
  int n1 = mid - top + 1;
  int n2 = bottom - mid;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
  {
    L[i] = a[top + i];
  }
 for (int j = 0; j < n2; j++)
  {
    R[j] = a[mid + 1 + j];
  }
  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = top;


  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      a[k] = L[i];
      i++;
    } else {
      a[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    a[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    a[k] = R[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int a[], int top, int bottom) {
  if (top < bottom) {

    // mid  is the point where the array is divided into two subarrays
    int mid = top + (bottom - top) / 2;

    mergeSort(a, top, mid);
    mergeSort(a, mid + 1, bottom);

    // Merge the sorted subarrays
    merge(a, top, mid, bottom);
  }
}
//accept the array
void accept(int a[],int n){
    int i;
    printf("Enter unsorted array=");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
// Print the array
void display(int a[], int n) {
    printf("Sorted array: \n");
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}


int main() {
  int a[50],i,n;
  printf("Enter limit=");
    scanf("%d",&n);
    accept(a,n);
  mergeSort(a, 0, n - 1);
  display(a, n);
}