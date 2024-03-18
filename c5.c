#include <stdio.h>
#include <stdlib.h>
#define ERRO -1

int fib(int N);

int main(){
    system("cls");
    int N , F;
    int N = 25;
    int F = fib(N);
    printf("N = %d F= %d\n", N, F);

}

int fib(int N){
    if ( N == 1 || N == 2) return(1);
    else if (N > 2) return(fib(N - 1) + fib(N - 2));
    else return(ERRO);
}