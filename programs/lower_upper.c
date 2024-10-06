#include <stdio.h>

int main(){
    char c;
    printf("Enter char : ");
    scanf("%c", &c);
    
    if(c >= 97 && c <= 122){
        printf("Lower case");
    }
    else if(c >= 65 && c <= 90){
        printf("Upper case");
    }
    else{
        printf("Invaild character");
    }
    return 0;
}
