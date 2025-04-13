#include<stdio.h>
void fiboncci()
{
    int n, t1=0, t2=1, nextTerm;
    printf("enter te no of terms ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d",t1);
        nextTerm = t1 +t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}
int main()
{
    //int i,j;
    // char *star = "*";
    // while(num != 0){
    //     for(int i=1; i<=num; i++)
    //         printf("%s",star );
    //     num = num -1;
    //     printf("\n");
    // }
    
    // int i,j;
    
    // for(i=6;i>=0;i--)
    // {  printf("\n");
    //     for(j=0;j<=i;j++)
    
    //     printf("*");
    // }
    
    //facttorial<<
    // fiboncci();
    // int num,fact=1;
    // printf("enter a number: ");
    // scanf("%d",&num);
    // for(int i=1; i <= num; i++)
    //     fact *=i;
    // printf("the fact of %d is:%d",num,fact);

    int num[10];
    printf("enter 10 numbers in oder; ");
    for(int i=1 ; i<=10; i++)
        scanf("%d",&num[i]);
    int sum=0;
    for(int i=0; i<=10; i++){
        if(num[i]<0){
            continue;
        }else{
            sum += num[i];
        }
    }
    printf("sum = %d",sum);
}