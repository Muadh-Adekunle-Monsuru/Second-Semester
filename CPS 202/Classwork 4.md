Write a program to pring all even numbers between 2 and 40
```c

#include <stdio.h>
int main(){
    int i=0;
    int p=0;
    for(i=2;i<40;i+=2){
        printf("%d\n",i);
    }
    while(p<=40){
        printf("%d\n",p);
        p+=2;
    }
    return 0;
}
```