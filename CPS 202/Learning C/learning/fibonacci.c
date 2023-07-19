#include <stdio.h>
int main(){

    int i = 0, fo = 0, fn = 1, next = 0;

    for(i=1;i<=15;i++){
        printf("%d\n",fo);    
        next = fo + fn;
        fo = fn;
        fn = next;

    }

    return 0;
}