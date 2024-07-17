#include <stdio.h>
#include <string.h>
#include <ctype.h>

// A function to copy the last n characters of src to dest
// and convert the lower case letters to upper case
void copy_last_n(char *src, char *dest, int n) {
  // Get the length of the source array
  int len = strlen(src);

  // Check if n is valid
  if (n > len || n < 0) {
    printf("Invalid value of n\n");
    return;
  }

  // Copy the last n characters from src to dest
  for (int i = 0; i < n; i++) {
    // Get the character at the i-th position from the end of src
    char c = src[len - n + i];

    // Convert it to upper case if it is lower case
    if (islower(c)) {
      c = toupper(c);
    }

    // Assign it to the i-th position of dest
    dest[i] = c;
  }

  // Add a null terminator at the end of dest
  dest[n] = '\0';
}

// A main function to test the copy_last_n function
int main() {
  // Declare and initialize two character arrays
  char src[] = "Hello World";
  char dest[20];

  // Call the copy_last_n function with n = 5
  copy_last_n(src, dest, 5);

  // Print the source and destination arrays
  printf("Source: %s\n", src);
  printf("Destination: %s\n", dest);

  return 0;
}
