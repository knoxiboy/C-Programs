#include <stdio.h>

int main(){
    int income;
    printf("Enter ur income : ");
    scanf("%d", &income);

    if(income <= 250000){
        printf("no tax");
    }
    else if(income <= 500000){
        printf("Tax = %.2f", income*5.0/100);
    }
    else if(income <= 1000000){
        printf("Tax = %.2f", income*20.0/100);
    }
    else{
        printf("Tax = %.2f", income*30.0/100);
    }

    return 0;
}
