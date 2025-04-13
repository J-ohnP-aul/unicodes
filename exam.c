#include<stdio.h>
#include<string.h>

int main()
{
    // char choice;
    // printf("enter item code :(A, B, C, D)");
    // scanf("%c",&choice);


    // switch (choice)
    // {
    // case 'A':
    //     printf("pencil");
    //     break;
    // case 'B':
    //     printf("book");
    //     break;
    // case 'C':
    //     printf("rubber");
    //     break;
    // case 'D':
    //     printf("pen");
    //     break;
    
    // default:
    //     printf("\ninvalid input");
    //     break;
    // }
    // int num[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int i, sum = 0;
    // // sum = 0;
    // for(i = 0; i < 12; i++){
    //     sum = sum + num[i];
    //     printf("%d\n",num[i]);
    // }
    // printf("%d",sum);
    // test code ?
    // int a=5,b=10,c=1;
    // if(a&&b>c){
    //     printf("welcome back");
    // }else{
    //     break;
    // }
    char name[20];
    printf("enter your name: ");
    scanf("%s",name);
    float hour,grosspay,tax,netPay;
    printf("enter the hours worked: ");
    scanf("%f",&hour);
    
    grosspay = hour * 1000.0;
    tax = grosspay * (11.0 / 100.0);
    netPay = grosspay - tax;
    
}