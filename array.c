    // char name[4] = {'a','b','c','d'};
    // for(int i=0; i<sizeof(name)/sizeof(name[0]); i++)
    // {
    //     printf("%c\n",name[i]);
    // }
#include<stdio.h>

int main()
{
    int A[50],i,n,L,largest;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");

    for(i=0; i<n; i++)
        scanf("%d",&A[i]);

    for(i=0; i<n; i++){
        printf("%d\t",A[i]);
        // L = (A[i]>A[i+1])?A[i]:A[i+1];
    }

    printf("\nthe  4th elm is %d",A[3]);

    largest = A[0];
    for(i=0; i<n; i++){
        if(largest < A[i])
            largest = A[i];
    }

    printf("the largest element is: %d",largest);
    
    return 0;
}