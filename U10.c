#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// Checks if name is tavaline, lühike or mootorratas
bool CheckTriple(char name[20])
{
  int lenght = strlen(name);
  for (int i = 0; i < lenght; i++)
  {
    if (i < lenght / 2)
    {
      if (!(47 < name[i]) || !(name[i] < 58))
      {
        return false;
      }
    }
    else
    {
      if (!(64 < name[i]) || !(name[i] < 91))
      {
        return false;
      }
    }

    if (i == 5)
    {
      printf("tavaline\n");
    }
    else if (i == 4 && lenght == 5)
    {
      printf("lühike\n");
    }
    else if (i == 3 && lenght == 4)
    {
      printf("mootorratas\n");
    }

    if (i == lenght-1) {
      return true;
    }
  }
}

// Checks if name is eriline
bool CheckSpecial(char name[20])
{
  int lenght = strlen(name);
  for (int i = 0; i < lenght; i++)
  {
    if (i < lenght - 1)
    {
      if (!(64 < name[i]) || !(name[i] < 91))
      {
        return false;
      }
    }
    else
    {
      if (!(47 < name[i]) || !(name[i] < 58))
      {
        return false;
      }
    }

    if (i == lenght - 1)
    {
      printf("eriline\n");
      return true;
    }
  }
}

int main() {
  int counter;
  printf("Mitu numbrimärke tuleb: ");
  scanf("%i", &counter);

  char **names = (char **)calloc(counter, sizeof(char *));
  for (int i = 0; i < counter; i++)
  {
    names[i] = (char *)calloc(20, sizeof(char));
  }

  for (int i = 0; i < counter; i++) {
    printf("Sisestage numbrimärk: ");
    scanf("%s", names[i]);
  }

  printf("\n");
  for (int i = 0; i < counter; i++)
  {
    int lenght = strlen(names[i]);

    if (lenght <= 1)
    {
      continue;
    }

    if (lenght == 6 || lenght == 5 || lenght == 4)
    {
      if (CheckTriple(names[i]))
      {
        continue;
      }
    }

    if (lenght <= 9)
    {
      if (CheckSpecial(names[i]))
      {
        continue;
      }
    }

    printf("pole kohalik numbrimärk\n");
  }

  for (int i = 0; i < counter; i++) {
    free(names[i]);
  }
 
  return 0;
}