#include <stdio.h>
int main() {

char linhas [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I','J'};
int tabuleiro [10][10];

//Tabuleiro preenchido com "água":

    for (int x = 0; x < 10; x++){
    for (int y = 0; y<10; y++ )
    {
        tabuleiro[x][y] = 0;
    }

    }
    
    //Navio posicionado na vertical:

    tabuleiro[3][3] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[3][5] = 3;
    
    //Navio posicionado na horizontal:
    
    tabuleiro[3][8] = 3;
    tabuleiro[4][8] = 3;
    tabuleiro[5][8] = 3;
    
    
    for (int imprimeLinhas = 0; imprimeLinhas < 10; imprimeLinhas++){
    
    if (imprimeLinhas==0){
            printf("   %c ", linhas[imprimeLinhas]);
    }else{
            printf("%c ", linhas[imprimeLinhas]);
    }
    if(imprimeLinhas == 9){
            printf("\n");
    
    }
    
    }

    //Impressão do tabuleiro:

    for (int i = 0; i < 10; i++){
    if(i== 9){
            printf("%d ", i+1);
    
    }else{
            printf(" %d ", i+1);
    }
    
    for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
    }
        printf("\n");
    } 
return 0;

}
