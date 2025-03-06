#include<stdio.h>
#include<stdlib.h>
//func declaration
int display(int n1, int );

int main()
{
    system("clear");
    int a,b,ret;
    printf("Enter two integer numbers respectively:\n");
    scanf("%d%d",&a,&b);
    ret = display(a,b);
    printf("\n the largest number is : %d",ret);
    return 0;
}

//function to retur the largest of two numbers
int display(int n1, int n2)
{
    int result;
    // if(n1>n2){
    //     result = n1;
    // }else{
    //     result = n2;
    // }
    result = (n1>n2)?n1:n2;
    return result;
}