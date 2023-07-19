#include <stdio.h>
int swap(int c, int d){
    int intermediate;
    int a = *c;
    int b = *d
    intermediate =  *d;
     *d = *c;
     *c = intermediate;
    
}

int main(){
    int a=10,b=50;
    
    swap(a,b);
    printf("Your a = %d and your b = %d",a,b);


    /*printf("Input first number:\n");
    scanf("%d",&a);
    printf("\nInput second number:\n");
    scanf("%d",&b);*/

    /*if (a>b){
        swap(a,b);
        printf("Your a = %d and your b = %d",a,b);
    }*/

    
    
    return 0;
}