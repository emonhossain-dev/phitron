#include<stdio.h>
int main(){

    int A = 0;
    long long int B = 0;
    float C = 0;
    char D; 

    scanf("%d %lld %f %c" , &A, &B, &C, &D);
    
    printf("%d\n%lld\n%.2f\n%c", A,B,C,D);
    return 0;
}