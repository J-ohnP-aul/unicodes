#include<stdio.h>
int main()
{
    float hours,Npay,Gpay,tax;
    char *name;
    printf("enter the no of hours: ");
    scanf("%f",&hours);
    printf("enter the name: ");
    scanf("%s",name);
    Gpay = hours * 1000.0;
    tax = Gpay * 0.11;
    Npay = Gpay - tax;
    printf("\nhello %s\nhours worked: %.1f\ngross pay: %.2f\nnet pay: %.2f",name,hours,Gpay,Npay);

}
