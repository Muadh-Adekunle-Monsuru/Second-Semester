```C
#include <stdio.h>

  

int cube(int val){

    int a;

    a = val * val * val;

    return a;

}

  

int main(void){

    int c,n;

    printf("Input your number");

    scanf("%d",&n);

    c = cube(n);

    printf("\n The cube of %d is %d \n",n,c);

  

    return 0;

}
```