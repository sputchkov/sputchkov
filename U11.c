#include <stdio.h>
#include <string.h>

int ChangeArrElement(int arr[], int arrLenght, int oldValue, int newValue)
{
  int counter = 0;

  for (int i = 0; i < arrLenght; i++) {
    if (arr[i] == oldValue) {
      arr[i] = newValue;
      counter++;
      continue;
    }
  }

  return counter;
}

int main() {
  int numberArray[10] = {10, 1, 6, 2, 3, 7, 1, 1, 2, 4};
  int lenght = sizeof numberArray / sizeof numberArray[0];
  int oldValue, newValue;

  printf("On antud massiiv: ");
  for (int i = 0; i < 10; i++)
    printf("%d ", numberArray[i]);

  printf("\nMillist väärtust peab muutma: ");
  scanf("%i", &oldValue);

  printf("Uus väärtus: ");
  scanf("%i", &newValue);

  int changeCounter = ChangeArrElement(numberArray, lenght, oldValue, newValue);

  printf("Asendust tehti: %i\n", changeCounter);
}

