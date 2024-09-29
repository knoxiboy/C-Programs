#include <stdio.h>

int main(){
    int m1, m2, m3;
    printf("Enter marks of subject 1 : ");
    scanf("%d", &m1);

    printf("Enter marks of subject 2 : ");
    scanf("%d", &m2);

    printf("Enter marks of subject 3 : ");
    scanf("%d", &m3);

    float percentage = (m1+m2+m3)/3;

    if(m1 < 33 || m2 < 33 || m3 < 33){
        printf("Fail\n%.2f", percentage);
    }
    else if((m1+m2+m3)/3 < 33){
        printf("Fail\n%.2f", percentage);
    }
    else{
        printf("Pass\n%.2f", percentage);
    }

    return 0;
}