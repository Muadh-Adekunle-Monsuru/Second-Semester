#include <stdio.h>
int main() {
  // Declare an array of 10 names
  char names[10][30] = {"John Doe", "Jane Doe", "Peter Smith", "Mary Jones", "Michael Brown", "Sarah White", "David Green", "Emily Blue", "Robert Black", "Alice Gray"};

  // Iterate through the array and print the names
  for (int i = 0; i < 10; i++) {
    printf("%s\n", names[i]);
  }

  return 0;
}

