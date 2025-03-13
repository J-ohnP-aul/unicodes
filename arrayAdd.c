#include<stdio.h>

int main()
{
    int matrixA[20][20], matrixB[20][20], matrixC[20][20];
    int m,n,p,q,i,j;
    printf("Enter rows and column of matrixA respectively: ");
    scanf("%d %d",&m, &n);
    printf("Enter rows and column of matrixB respectively: ");
    scanf("%d %d",&p, &q);

    if(m == p && n == q)
    {
        printf("enter matrixA elemnts\n: ");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                scanf("%d",&matrixA[i][j]);
                
        printf("\nenter matrixB elemnts\n: ");
        for(i=0; i<p; i++)
            for(j=0; j<q; j++)
                scanf("%d",&matrixB[i][j]);

        printf("matriaA\n");
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                printf("%d\t",matrixA[i][j]);
            }printf("\n");
        }
        
        // matrix addition
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        
        printf("sum of the two matrices is\n");
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                printf("%d\t",matrixC[i][j]);
            }printf("\n");
        }

    }


    return 0;
}