#include <stdio.h>

void inter(int x, int y){
    for (int* i; i< sizeof(x); i++){
        for (int* j; j<sizeof(y);i++){
            if (x[i]==y[j]){
                printf("%d,",x[i]);
            }
        }
    }
    printf("\n");
}