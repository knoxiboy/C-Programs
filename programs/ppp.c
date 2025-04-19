#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int a,b,c;
    const char n;
    do{

        printf("*CALCULATOR\n");
        printf("1 Addition\t2 Subtraction\t3 Multiplcation \t4 Division \t5 Power\n");
        printf("Enter your choice(1,2,3,4,5): ");
        scanf("%d",&c);
        if(c==1){
            printf("Enter number 1:");
            scanf("%d",&a);
            printf("Enter number 2:");
            scanf("%d",&b);
            printf("Result=%d",a+b);
        }
        else if(c==2){
            printf("Enter number 1:");
            scanf("%d",&a);
            printf("Enter number 2:");
            scanf("%d",&b);
            printf("Result=%d",a-b);

        }
        else if(c==3){
            printf("Enter number 1:");
            scanf("%d",&a);
            printf("Enter number 2:");
            scanf("%d",&b);
            printf("Result=%d",a*b);
        }
        else if(c==4){
            printf("Enter number 1:");
            scanf("%d",&a);
            printf("Enter number 2:");
            scanf("%d",&b);
            printf("Result=%d",a/b);
            
        }
        else if(c==5){
            printf("Enter number:");
            scanf("%d",&a);
            printf("Enter its power:");
            scanf("%d",&b);
            printf("Result=%d",pow(a,b));
        }
        printf("\nDo you want to perform another operation (For YES, press y / For NO, press n)");
        scanf("%c ", &n);

    }while(strcmp(n,"y"));
    return 0;

}