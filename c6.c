#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MyStrLen(char * str);

int main(){
    char Frase[1024] = "bla xrl tod hjv ks";

    printf("%s\n", Frase);

    Frase [10]= " \0";

    printf("%s\n", Frase);

    printf("tamanho da segunda strring e %d\n", strlen(Frase));
    printf("Tamanho (MyStrLen): %d\n", MyStrLen(Frase));

}

int MyStrLen(char * str){
    int T;
    for(T = 0; str[T] != '\0'; T++);
    return(T);
}