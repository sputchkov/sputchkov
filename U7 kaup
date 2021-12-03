#include <stdio.h>
#include "math.h"

int a;
int main() {
    int Min, Max, MinT, MaxT;
    float kesk=0, Y=10000;
    int Closest[10];

    printf("Sisestage  toodete arvu\n");
    scanf("%d", &a);
    char *b[a];
    float c[a];
    for (int i = 0; i < a; i++) {
        printf("Sisestage iga toote kohta nimetuse ja hinna\n");
        scanf("%s %f", &b[i], &c[i]);
    }
    Max = 0;
    for (int i = 0; i < a; i++) {
        if(Max<c[i]){
            Max=c[i];
            MaxT=i;
        }
    }

    Min = c[0];
    for (int i = 0; i < a; i++) {
        if(Min>c[i]){
            Min=c[i];
            MinT=i;
        }
    }


    for (int j = 0; j < a ;j++) {
        kesk += c[j];
    }
    kesk = kesk/a;

    int cl = 0;
    for (int j = 0; j < a-1; j++) {
        if (abs(kesk - c[j]) <= Y) {
            Y = abs(kesk - c[j]);
        }
    }

    for (int i = 0; i < a-1; i++) {
        if (abs(kesk - c[i]) == Y){
            Closest[cl]=i;
            cl++;
        }
    }

    printf("Koige kallim toode: %s\n", &b[MaxT]);
    printf("Koige odavam toode: %s\n", &b[MinT]);
    printf("Keskmine toote hind = %.2f\n", kesk);
    printf("Keskmise hinnaga toode/tooted:\n");

    for (int i = 0; i < cl; i++) {
        printf("%s\n", &b[Closest[i]]);
    }

}
