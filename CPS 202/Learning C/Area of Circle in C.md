```C
#include <stdio.h>

#define pi 3.1415926535

  

int main(){

    double radius, area;

    printf("Input the radius\n");

    scanf("%lf",&radius);

    area = pi * radius * radius;

  

    printf("For the radius of %lf, the area is %lf",radius,area);

  
  

    return 0;

}
```