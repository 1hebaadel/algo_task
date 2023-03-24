#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size; //The number of the array's elements.
    printf("Enter the size of the array:\t"); //ask for enter the size of an array
    scanf("%d" , &size); // take the size from the user
    int myArr[size]; //enter the size of elements

    printf("Enter an element:\t");
    //Loop to enter the element to array:

    for (int i = 0 ; i < size ; i++)
    {
        scanf("%d" , &myArr[i]);
    } // O(n)


    //Insertion Sort:

    for(int i = 1 ; i <= size-1 ; i++)
    { //O(n)
        int j = i;
        while(j > 0 && myArr[j-1] > myArr[j])
        {
            int temp = myArr[j];
            myArr[j] = myArr[j-1];
            myArr[j-1] = temp;
            j--;
        }
    } //O(n^2)

    int max = myArr[size-1];
    int count = 0 ;//Counter to count how much the largest number is iterated
    //now myArr is sorted:

    for (int i = size-1 ; i>=0 ; i--)
    {
        if(max == myArr[i])
        {
            count++;
        }
    }
    printf("The Largest number is iterated :   %d" ,count);



    return 0;
}
