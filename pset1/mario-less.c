#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int input = 0;

  do {

    printf("Height: ");
    input =  get_int();

    if (input == 0) {
      return 0;
  }

  } while (input < 0 || input > 23);

  for (int i = 0; i < input; i++) {

    for (int j = 0; j < input - i - 1; j++) {
      printf("%s", " ");
    }

    for (int k = 0; k < i + 2; k++) {
      printf("#");
    }

    printf("\n");
  }
}
