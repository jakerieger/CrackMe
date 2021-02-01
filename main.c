#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Lookup table of hex values for ASCII chars: {C, o, r, e, c, t}
char lookup[6] = {0x43, 0x6F, 0x72, 0x65, 0x63, 0x74};

// Binary seed used for XOR comparison below
char secret = 0b0011; // 3

int main() {
  printf("Enter code: ");
  unsigned int input; 
  scanf("%d", &input);

  // Get length of input code
  int length = (int)floor(log10((float)input)) + 1;

  // Create new int array with the length calculated above
  // Store each individual int from input int in array
  // i.e. 144563 -> {1, 4, 4, 5, 6, 3}
  int arr[length];
  int i = 0;
  do {
    arr[i] = input % 10;
    input /= 10;
    i++;
  } while (input != 0);

  for (int i = 0; i < length; i++) {
    // take each int in arr and XOR with secret seed
    // take result and use as index for lookup array
    // print resulting char from lookup
    printf("%c", lookup[arr[i]^secret]);
  }

  // Given the correct input code, "Correct" should print to the screen
  // Invalid codes result in nonsense being printed

  printf("\n");
  system("pause");
  return 0;
}