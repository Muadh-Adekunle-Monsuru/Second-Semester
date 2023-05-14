```c
//Finding factorial of a number
#include <stdio.h>
int main(){
    int i,n;
    int fact=1;

    printf("What is the number\n");
    scanf("%d",&n);
    if(n==0){
        fact =1;
    }else{
            for(i=1;i<n;i++){
                    fact += i*fact;
            }
    }

    printf("\nThe factorial of %d is %d",n, fact);
    return 0;
}
```