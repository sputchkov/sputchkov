#include <stdio.h>

int main() {
    int n1, n2;
    printf("Sisestage n1 ja n2: \n");
    scanf("%d %d", &n1, &n2);
    int M1[n1], M2[n2];
    for (int i = 0; i < n1; i++) {
        printf("Sisestage M1 element: \n");
        scanf("%d", &M1[i]);
    }
    for (int j = 0; j < n2; j++) {
        printf("Sisestage M2 element: \n");
        scanf("%d", &M2[j]);
    }

    int M[n1+n2];
    int m=0;
    int h=0;

    for (int k = 0; k < n1; k++) {
        for (int i = 0; i < n2; i++) {
            if(M1[k]>M2[i]){
                M[h] = M2[i];
                m++;
                h++;
            }
            else{
                M[h] = M1[i];
                h++;
            }
        }
    }

    return 0;
}
