#include <stdio.h>
int ArrayChecker(int* k, int* e,int n,int t, int h){
    int r1 = 0;
    int r2 = 0;
    for (int i=0; i<n;i++){
        if (k[i]==h){
            r1 = 1;
            break;
        }
    }
    for (int j=0; j<t;j++){
        if (e[j]==h){
            r2 =1;
            break;
        }
    }
    return r1 & r2;
}