#include <stdio.h>
void hello(int times){
    while(times > 0){
       printf("Hello World \n");
        times--;
    }
}

int main(void){
    int time;
    printf("How many times do you want an hello? \n");
    scanf("%d",&time);
    
    hello(time);

    return 0;
}