```C
#include <stdio.h>

int main(){

    int i,k;

    int fact = 1;

    printf("What is your k\n");

    scanf("%d",&k);

  

    for(i=1;i<=k;i++){

        fact = fact * i;

    }

    printf("The factorial of %d is %d",k, fact);

    return 0;

}
```

