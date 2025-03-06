#include<stdio.h>
#include<math.h>

void fibonacci();
void factorial();
void quadraticRoot();


int main(){
    int choice;
    do{
        printf("\n1.fibonacci\n2.factorial\n3.quadratic roots\n4.Exit\n");
        printf("\nEnter choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                fibonacci();
                break;
            case 2:
                factorial();
                break;
            case 3:
                quadraticRoot(); 
                break;
            case 4:
                printf("\nExit"); 
                break;
            default:
                printf("\n invalid choice");
        }
    }while(choice != 4);

    return 0;
}
void fibonacci(){
    int n,t1 = 0,t2=1,next;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("\nFobanacci sequence \n");
    for(int i = 1;i<=n;++i){
        printf("%d",t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
}
void factorial(){
    int n,fact = 1;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorial of %d is %d",n,fact);
}

void quadraticRoot(){
    double a,b,c,d,real,img;
    printf("Enter coeficients a,b,c respectively:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    d = b*b - 4.0*a*c;
    real = -b/(2*a);
    img = sqrt(fabs(d)) /(2*a);

    if (d>0){
        printf("root 1: %3lf\nroot 2 :%.3lf", real + img, real-img);
    }else if (d == 0){
        printf("double roots %.3lf\n",real);
    }else{
        printf("roots %.3lf + %.3lfi and %.3lf + %.3lfi\n ",real,img,real,img);
    }
}