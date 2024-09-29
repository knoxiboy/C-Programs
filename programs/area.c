#include <stdio.h>
#include <string.h>

int rectangleArea();
int squareArea();
int circleArea();

int main(){
    char x[] = "";
    printf("which object area do you want? ");
    scanf("%s", &x);

    if(strcmp(x , "rectangle") == 0){
        rectangleArea();
    }
    else if(strcmp(x , "square") == 0){
        squareArea();
    }
    else if(strcmp(x , "circle") == 0){
        circleArea();
    }
    else{
        printf("Enter correct object name...");
    }

    return 0;
}

int rectangleArea(){
    int l, w, area;

    printf("Enter length : ");
    scanf("%d", &l);

    printf("Enter width : ");
    scanf("%d", &w);

    area = l*w;
    printf("Area = %d", area);
    
    return 0;
}

int squareArea(){
    int s, area;

    printf("Enter side length : ");
    scanf("%d", &s);

    area = s*s;
    printf("Area = %d", area);
    
    return 0;
}

int circleArea(){
    int r;
    float area;

    printf("Enter radius : ");
    scanf("%d", &r);

    area = 3.14*r*r;
    printf("Area = %.2f", area);
    
    return 0;
}