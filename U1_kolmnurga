#include <stdio.h>
#include <math.h>

int main(void) {
    float XA, YA , XB  ,YB , XC, YC, A , B , C, P;
    printf( "Leidame kolmenurga ümbermõõt\n ");
    printf( "Sissestage kolm koordinadid A(x1,y1) B(x2,y2) C(x3,y3) \n");
    scanf( "%f %f %f %f %f %f" , &XA , &XB , &XC , &YA , &YB , &YC ) ;
    if ( XA == XB == XC || YA == YB == YC ){
        printf ( " Ei saa leida kolmenurga sest , koordinad pead olema erinevaid");
    }
    else{
        A =  sqrtf((XB - XA) * (XB - XA) + (YB - YA) * (YB - YA));
        B =  sqrtf((XC - XA) * (XC - XA) + (YC - YA) * (YC - YA));
        C =  sqrtf((XC - XB) * (XC - XB) + (YC - YB) * (YC - YB));
        P = A + B + C ;
        printf ("Vastus: %f ",P);
    }

}

