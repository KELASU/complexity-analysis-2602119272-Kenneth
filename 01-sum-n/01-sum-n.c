#include <stdio.h>
int sumofn(int n){
    int n1 = 0;
    while (n>0){
        n1 += n;
        n--;
    }
    return n1;
}

void sumofn2(int n){
    int sum = 0;
    sum += n*(n+1)/2;
}