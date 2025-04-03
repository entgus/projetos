#include <stdio.h>
#include <stdlib.h>
/*DEFINIR NUMERO EQUIVALENTES A COLUNA E A LINHA*/
#define linha 10
#define coluna 10

/*RECURSIVOS DA MATRIZ E DO DESENHO DA CRUZ, CONE E LOSANGO*/

/*USANDO O 'FOR' PARA A REPETIÇAO DA MATRIZ */
void desenharMatriz(int matriz[linha][coluna]) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
}

void desenharCruz(int matriz[linha][coluna], int x, int y, int tamanho) {
    for (int i = -tamanho; i <= tamanho; i++) {
        /*DEFINDO O LIMITE E AS CORDENADAS DA CRUZ*/
        if (x + i >= 0 && x + i < linha) matriz[x + i][y] = 1; 
        if (y + i >= 0 && y + i < coluna) matriz[x][y + i] = 1; 
    }
}


void desenharCone(int matriz[linha][coluna], int x, int y, int LINHA) {
    int centro = y; 
    for (int i = 0; i < LINHA; i++) {
        int inicio = centro - i;
        int fim = centro + i;
        for (int j = inicio; j <= fim; j++) {
            /*DEFINDO O LIMITE E AS CORDENADAS DO CONE*/
            if (j >= 0 && j < coluna && (x - i) >= 0) { 
                matriz[x + i][j] = 1;
            }
        }
    }
}


void desenharLosango(int matriz[linha][coluna], int x, int y, int tamanho) {
    for (int i = -tamanho; i <= tamanho; i++) {
        /*DEFINDO O LIMITE E AS CORDENADAS DO LOSANGO(USO DO ABS PARA TORNAR O NUMERO POSITIVO)*/
        for (int j = -tamanho + abs(i); j <= tamanho - abs(i); j++) {
            if (x + i >= 0 && x + i < linha && y + j >= 0 && y + j < coluna) {
                matriz[x + i][y + j] = 1;
            }
        }
    }
}

int main() {
    int matriz[linha][coluna];


/*INCIALIZANDO MATRIZ COM 0*/
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            matriz[i][j] = 0;        
        }
    }
    /*DESENHAR UMA CRUZ*/
   desenharCruz(matriz, 2,2,2);

   /*DESENHAR UM CONE*/
    desenharCone(matriz, 2, 7, 3);
    
    /*DESENHAR UM LOSANGO*/
    desenharLosango(matriz, 7, 3, 2);

    /*EXIBIR A MATRIZ*/
    desenharMatriz(matriz);

    return 0;
}