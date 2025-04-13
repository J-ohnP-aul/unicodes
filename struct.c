#include<stdio.h>

int main()
{
    struct Book
    {
        /* data */
        char name[25];
        float price;
        int pages;
    };

    struct Book b1,b2,b3;

    printf("enter the name, price and pages of a book \n");
    scanf("%s %f %d", b1.name, &b1.price, &b1.pages);
    scanf("%s %f %d", b2.name, &b2.price, &b2.pages);
    scanf("%s %f %d", b3.name, &b3.price, &b3.pages);

    printf("======BOOK INFORMATION======\n");
    printf(":%s %f %d\n",b1.name, b1.price, b1.pages);
    printf(":%s %f %d\n",b2.name, b2.price, b2.pages);
    printf(":%s %f %d\n",b3.name, b3.price, b3.pages);

}