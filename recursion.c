#include<stdio.h>

long factorial(unsigned int num){
    long fact = 1;
    unsigned int i;
    for(i=num; i>1; i--){
        fact *= i;
    }
    return fact;
}

int main()
{
    unsigned int n;
    printf("Enter an integer: ");
    scanf("%u",&n);
    printf("factorial of %d is %li\n",n , factorial(n));
}