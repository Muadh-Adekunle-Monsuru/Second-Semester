```C
#include <stdio.h>

int main(){
    int n;
    int i = 0;
    int container[5];
    int sum = 0;
    while(i<5){
        printf("What is your number now:\n");
        scanf("%d",&n);
        container[i] = n;
        i++;
    }
 printf("Your values are: \n");
    for(i=0;i<5;i++){
        printf("%d \t",container[i]);
        sum = sum + container[i];
        }
    printf("\nThe sum is: %d\n",sum);

  

    return 0;

}
```