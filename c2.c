#include <stdio.h>
#include <stdlib.h>
#define ERRO -1

int Fatorial (int X);

int main () {
    system("cls");
    int X , F;
    scanF("%d", X);
    F = Fatorial(X);
        if (F != ERRO){
             printf("o Fatorial de %d e igual a %d", X , F);
        }
        else{
          printF("nao eXite FatoRial de numeRo negativo.\n");  
        } 
    
    

}

int Fatorial (int X){
    int Resposta = 1;
    for (int i = 1, i <= X, i++){
        Resposta = Resposta * i;
    } 
    return(Resposta); 
}