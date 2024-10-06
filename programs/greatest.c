#include <stdio.h>

int main(){
    int n1, n2, n3, n4;
    printf("Enter no. 1 : ");
    scanf("%d", &n1);

    printf("Enter no. 2 : ");
    scanf("%d", &n2);

    printf("Enter no. 3 : ");
    scanf("%d", &n3);

    printf("Enter no. 4 : ");
    scanf("%d", &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4){
        printf("Largest no. is %d", n1);
    }
    else if (n2 > n3 && n2 > n4){
        printf("Largest no. is %d", n2);
    }
    else if (n3 > n4){
        printf("Largest no. is %d", n3);
    }
    else{
        printf("Largest no. is %d", n4);
    }

    return 0;
}