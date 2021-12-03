#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main( ) {
    char str[20];

    printf( "Sissestage kellaaega (N):");
    scanf("%s", str);

    int nr_of_cols = 0;
    char *pch = strchr(str,':');
    while (pch != NULL) {
        nr_of_cols++;
        pch = strchr(pch + 1, ':');
    }

    if (nr_of_cols < 2) {
        return 0;
    }

    bool formatOk = true;
    bool timeIsReal = true;


    char * token = strtok(str, ":");
    int i = 0;
    while( token != NULL ) {
        int e = atoi(token);
        if (strlen(token) < 2) {
            formatOk = false;
        }
        if (e == 0) {
            formatOk = false;
            timeIsReal = false;
            break;
        }
        token = strtok(NULL, " ");
        if (i == 0) {
            if (e > 22) {
                timeIsReal = false;
            }
        } else if (i > 1) {
            if (e > 59) {
                timeIsReal = false;
            }
        }
        i++;

    }

    if (formatOk) {
        printf("soobiv  format");
    } else {
        printf("ebasoobiv format");
    }

    if (timeIsReal) {
        printf(", reaalne kellaaeg\n");
    } else {
        printf(", ebareaalne kellaaeg\n");
    }

    return 0;
}