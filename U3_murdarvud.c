#include <stdio.h>

int main() {
    int a,b,c,d,x,y;
    printf("Sisestage 2 murdarvu\n");
    scanf("%d/%d %d/%d", &a, &b, &c, &d);
    for(b,d ;b==0 || d==0;){
        printf("Error\n");
        printf("Sisestage 2 murdarvu\n");
        scanf("%d/%d %d/%d", &a, &b, &c, &d);
    }
    if(a==0 || c==0){
        if (a==0){
            printf("%d/%d", c, d);
        } else {
            printf("%d/%d", a, b);
        }
    }
    else {
        y=b * d;
        x=a * d + c * b;
        printf("%d/%d", x,y);
    }

}
