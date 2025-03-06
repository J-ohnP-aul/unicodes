#include<stdio.h>

int main()
{
    int num,n,rev = 0;
    int digit;
    printf("Enter a four digit NUmber:  ");
    scanf("%d",&num);
    n = num;
    while(num != 0){
        digit = num%10;
        rev = rev*10 + digit;
        num = num / 10;
    }

    printf("\nthe reverse of %d is %d ", n, rev);
    if(n == rev){
        printf("\n%d is a pridrom its reverse is %d",n,rev);
    }else{
        printf("the number is not a paridron!!!");
    }
    
    return 0;
}
    // do{
    //     digit = num%10;
    //     rev = rev*10 + digit;
    //     num = num / 10;
    // }while(num != 0);