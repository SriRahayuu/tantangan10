#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    int xpp = *yp;
    *yp = temp;
 }
 
 void bubblesort(int arr[],int n)
 {
    for(int i=n-1; i >= 0; i--)
     
          for(int j = 0; j <= n-1; j++)
             if(arr[j] > arr]j+1];
              swap(&arr[j], &arr[j+1]);
}
void printArray(int arr[],int size)
{
    int i;
    for (1=0; i < size; i++)
        printf("%d", arr[i];
     printf("n");
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeo (arr)/sizeo(arr[0]);
    bubblesort(arr, n);
    printf("sorted array: \n");
    printArray(arr, n);
    return 0;
}

