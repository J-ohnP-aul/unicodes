#include<stdio.h>
#include<stdlib.h>
void displayMenu();

int main()
{
    int choice;
    system("clear");
    printf("\t\t||||>>>>   MENU  <<<<||||\n\n\n");
    displayMenu();
    printf("\n\t\tEnter your option : __");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\t1.Chapo - bean :\t\t70/=");
            break;
        case 2:
            printf("\n\t2.Ugali - omena:\t\t60/=");
            break;
        case 3:
            printf("\n\t3.Ugali -sukuma:\t\t50/=");
            break;
        case 4:
            printf("\n\t4.ugali - Nyama  :\t\t80/=");
            break;
        case 5:
            exit(1);

    }


    
    return 0;
}
void displayMenu(){
    printf("\n\t\t1.Chapo - bean :");
    printf("\n\t\t2.Ugali - omena:");
    printf("\n\t\t3.Ugali -sukuma:");
    printf("\n\t\t4.ugali - Nyama ");
    printf("\n\t\t5.exit");
}