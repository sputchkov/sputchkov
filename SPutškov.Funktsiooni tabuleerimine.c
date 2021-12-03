#include <stdio.h>
#include <math.h>

int main(void)
{
const double E = 2.718281828459045;

int a, b, h;
printf("Sisesta algväärtus A:\n");
scanf("%d", &a);
printf("Sisesta lõppväärtus B:\n");
scanf("%d", &b);
printf("Sisesta samm H:\n");+
scanf("%d", &h);
if (a > b || h < 1) {
printf("Üks tingimustest ei ole täidetud: A < B ja H > 0!\n");
return(1);
};

printf("Tulemused:\n");
printf(" x | y = f(x) \n");

int iteration = 0; // iteration nagu repeat
while(1) {
int x = a + iteration * h;
iteration++;
if (x > b || iteration > 18) break;
double result = (x + (2 / (pow(x, 2) - 3 ))) / (pow(E, (x - 2)) + 1 / (3 - pow(x, 2)));

printf(" %d | %0.8f \n", x, result);
}

return(0);
}