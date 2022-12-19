#include <stdio.h>

int matelemsum(int M, int N, int* matrix){
    int matsum =0;
    for (int m=0; m<M; m++){
        for (int n=0; n<N;n++){
            matsum += matrix [M*m+n];
        }
    }
    return matsum;
}