#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice,max;
    system("clear");
    printf("\t\t||||>>>>   MeNU  <<<<||||\n\n\t1.print numbers 1 - 10 using for loop\n\t2.Print even No betwen 100 and 20 inclusively\n\t3.check if a number is a paridrom using while loop\n\t4.eXIT\nenter an option:  ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            for(int i=0; i<=10; i++){
                printf("%d\n",i);
            }
            break;
        case 2:
            max =100;
            do
            {
                if(max%2 == 0){
                    printf("%d\n",max);
                }
                max --;
            }while(max >= 20);
            break;
        case 3:{
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
            }
            
            break;
        case 4:
            exit(1);
    }



}