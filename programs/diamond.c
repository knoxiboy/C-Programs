#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = n; j > 0; j--){
            if(i==j){
                printf("%d", j);
            }
            else{
                printf(" ");
            }
        }
        for(int j = 2; j <= n; j++){
            if(i==j){
                printf("%d", j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i = n; i > 0; i--){
        for(int j = n; j > 0; j--){
            if(i==j){
                printf("%d", j);
            }
            else{
                printf(" ");
            }
        }
        for(int j = 2; j <= n; j++){
            if(i==j){
                printf("%d", j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}