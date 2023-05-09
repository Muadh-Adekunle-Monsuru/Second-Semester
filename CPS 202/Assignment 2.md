
```c 
#include <stdio.h>


  

int main() {

  char name[35];

  char address[35];

  float meter_number;

  float energy_consumption;

  float charge;

  float amount;

  

  // Get the user's name, address, meter number, and energy consumption.

  printf("What is your name? ");

  fgets(name, 35, stdin);

  printf("What is your address? ");

  fgets(address, 35, stdin);

  printf("What is your Meter Number? ");

  scanf("%f", &meter_number);

  printf("What is your Energy Consuption in KwH? ");

  scanf("%f", &energy_consumption);

  

  // Calculate the charge.

  if (energy_consumption <= 200) {

    charge = 100;

  } else if (energy_consumption <= 500) {

    charge = 80;

  } else if (energy_consumption <= 1000) {

    charge = 50;

  } else {

    charge = 40;

  }

  amount = charge * energy_consumption;

  printf("Dear %s with the address %s and the meter number %s\n",name,address,meter_number);

  printf("Your energy consumption is %.2f with that your charge is %.2f\n the total amount you will pay is %.0f\n",energy_consumption,charge,amount);

return 0;

}
```