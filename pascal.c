#include<stdio.h>

int main()
{
    int rows,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for( i = 0; i<rows; i++)
    {
        //print leading spaces for aloignment
        for(k=1; k <= rows - i; k++){
            printf("  ");//,two spaces for better spCING
        }
        for(j=0; j<=i; j++){
            //calculate and print bionimial coeficient
            int coef = 1;
            if(j>0 && i>j){
                coef = coef * (i - j + 1);
            }
            printf("%4d",coef);//4 spaces align
        }
        printf("\n");
    }
    
    return 0;
}