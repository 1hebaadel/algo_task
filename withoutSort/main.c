#include <stdio.h>
#include <stdlib.h>

int main(){

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
    } // o(n)

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
