#include <stdio.h>
#include <stdlib.h>
// To get started, include any libraries you plan to use.

// Then go ahead and add a main function to your C code.
// This is where your program will start executing.
int main() {
// There are only a few basic types in c, which of them are Char, int, float, double and short/long.
  int lucky = 23;
  //Create a variable by starting with a type, followed by a name and value.
  printf("Value: %i \n", lucky);
  // Use printf(); to print the value to a standard output
  printf("Address: %p \n", &lucky);
  // Or put an ampersand in front of it to reference its Address in memory

  char hello;
  // There's no string type but instead char which represents a one byte character stored as an Integer
  char hello[] = "Hi Mom";
  // A string can be created with an array of characters each letter will have its own memory Address and be terminated by a null character

  char *str;
  // Another approach is to start with a pointer, by adding a star character infront of the type.
  char *str = malloc(4);
  // Then we can allocate 4 bytes to it.

  str[0] = 'h';
  str[1] = 'e';
  str[2] = 'y';
  str[3] = '\0';
  // Now assign a character to each index ending with the null character "\0" to create a string.

      free(str);
// Now when you no longer need that memory allocated to your program use free to release it back to the computer's ram


  return 0; // Notice how it returns an Integer type, a return value of 0 means, while a return value of 1 means an exit failure
}


////////////////////////////////////////////////////////////////////////////////

// C is procedural and does not support object oriented features.
// Although you can still create your own complex data types using structs.
// Compile your code using your compiler, for me it's gcc so i would use it like:
gcc tutorial.c -o tutorial.exe
