#include <stdio.h>


int main() {
    int n;
    printf("Sisestage elementide arv:\n");
    scanf("%d", &n);
    int mas[n];
    for(int i = 0; i < n; i++){
        printf("Sisestage elemendid:\n");
        scanf("%d", &mas[i]);
    }
    int x;
    printf("Sisestage x:\n");
    scanf("%d", &x);
    int arr[n];
    int j;
    int k = 0;
    for(j = 0; j < n; j++){
        if (mas[j] < x){
            arr[k]=mas[j];
            k++;
        }
    }
    for(j = 0 ;j < n; j++){
        if(mas[j] > x){
            arr[k]=mas[j];
            k++;
        }
    }
    for(int l = 0; l < k; l++){
        printf("%d ", arr[l]);

    }
    return 0;
}
