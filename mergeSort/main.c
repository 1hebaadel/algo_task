#include <stdio.h>
#include <stdlib.h>

void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            // Finding mid element
            int m = l+(r-l)/2;
            // Recursively sorting both the halves
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            // Merge the array
            merge(arr, l, m, r);
        }
    }
    void merge(int arr[], int l, int m, int r)
    {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;
        // Create temp arrays
        int L[n1], R[n2];
        // Copy data to temp array
        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1+ j];
        // Merge the temp arrays
        i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2)
            {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
                k++;
            }
        // Copy the remaining elements of L[]
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        // Copy the remaining elements of R[]
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
}

int main()
{
     int numberOfCandy;
    // Enter number of candies
    printf("Enter number of candies: \t");
    scanf("%d", &numberOfCandy);
    // Enter size of candies
    printf("Enter candies: \t");
    int sizeOfCandy [numberOfCandy];
    for( int i=0;i<numberOfCandy;i++){
            printf("Enter the next candy: \t");
            scanf("%d", &sizeOfCandy[i]);
    }
    mergeSort(sizeOfCandy,sizeOfCandy[0],sizeOfCandy[numberOfCandy-1]);
    int max=sizeOfCandy[0];
    int count =1; // in case first element is the largest one
    for(int i = 1; i < numberOfCandy; i++){
     if (sizeOfCandy[i]>max){
     max = sizeOfCandy[i];
     count=1; // count from beginning
     }else if (sizeOfCandy[i]==max){
     count++;
     }
    }
    printf("The number that the largest number has been iterated is :    %d", count);
     return 0;
}
