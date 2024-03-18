#include <stdio.h>
#include <stdlib.h>
#define ERRO -2

int f (int X);

int main (){
    system("cls");
    int N = 3;
    int F = f(N);
    if ( F!= ERRO) printf("g(%d)=%d.\n", N ,F);
    
    
}

int f (int X){
    if (X == 0) return(-1);
    else if (X > 0) return(4 * f(X - 1 ) + 6);
    else return(ERRO);

 
}