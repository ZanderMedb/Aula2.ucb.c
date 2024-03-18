#include <stdio.h>
#include <stdlib.h>


int matriz[2][3]= {
    {1, 2, 3},
    {4, 5, 6}
};

int main(){
    system("cls");
    int M[3][3]= {
    {2, 7, 1 },
    {3, 5, 8 },
    {1, 6, 10}
};

int D = 0;
D = D + M[0][0] * M[1][1] * M[2][2];
D = D + M[0][1] * M[1][2] * M[2][0];
D = D + M[0][2] * M[1][0] * M[2][1];
D = D - M[2][0] * M[1][1] * M[0][2];
D = D - M[2][1] * M[1][2] * M[0][0];
D = D - M[2][2] * M[1][0] * M[0][1];

printf("resultado e: %d", D);
}