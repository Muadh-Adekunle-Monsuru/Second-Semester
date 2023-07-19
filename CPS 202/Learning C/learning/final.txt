#include <stdio.h>

#define MAX_SIZE 1000 // Maximum number of elements in the array

int main() {
   FILE *fp; // File pointer
   int arr[MAX_SIZE]; // Array to store the data from the file
   int num, i = 0; // Number read from the file and loop counter variable
   int sum = 0;
   fp = fopen("data.txt", "r"); // Open the file in read mode




   // Read data from the file and store it in the array
    while(fscanf(fp, "%d", &num) != EOF && i < MAX_SIZE) {
      arr[i] = num;
      i++;
      
   }

   fclose(fp); // Close the file

   // Print the data stored in the array
   for(int j = 0; j < i; j++) {
      sum = sum + arr[j];
   }
   
   printf("\nThe sum is %d \n", sum);
   printf("The Average is %f",sum/1000.0);
   printf("\n"); 

   return 0;
}
