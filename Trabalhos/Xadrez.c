#include <stdio.h>


/*FUNÇOES RECURSIVAS DO BISPO, RAINHA E TORRE, COM O USO DE LOOPS*/
void moverbispo(int casa){
int casas;
    int a = 0;
   if (a < 5)
   {
   
     while ( a <= 5){
        printf("mova o bispo ate 5 casas superior direita:");
    scanf("%d", &casas);
for (casa; casa <= casas; casa ++)
{
    printf("cima ");

printf("direita\n");
a =+ casas;

}

printf("\n");
casa = 1;
    }
   
printf("limite atingido, voltando ao ponto inicial...\n");
a = 0;

}
}

void moverrainha(int casa) {
    int casas;
        int a = 0;
       if (a < 8)
       {
       
         while ( a <= 8){
            printf("mova a rainha ate 8 casas para a esquerda:");
        scanf("%d", &casas);

    for (casa; casa <= casas; casa ++)
    {
        printf("esquerda\n "); 
    a =+ casas;
    
    }
    
    printf("\n");
    casa = 1;
        }
       
    printf("limite atingido, voltando ao ponto inicial...\n");
    a = 0;
    
    }
    }

    void movertorre(int casa) {
        int casas;
            int a = 0;
           if (a < 5)
           {
           
             while ( a <= 5){
                printf("mova a torre ate 5 casas para a direita:");
            scanf("%d", &casas);
    
        for (casa; casa <= casas; casa ++)
        {
            printf("direita\n "); 
        a =+ casas;
        
        }
        
        printf("\n");
        casa = 1;
            }
           
        printf("limite atingido, voltando ao ponto inicial...\n");
        a = 0;
        
        }
        }
    

        /*CODIGO MAIN COM INTS PARA AMARZENAR OS VALORES*/
int main() {

    int bispo = 1;
    int rainha = 1;
    int torre = 1;
    int cavalo = 0;
    int casas;
    int escolha;
   
    /*IMPRESSAO DAS INSTRUÇOES*/
    printf("escolha um para mover\n");

    printf("1.mova o bispo\n");
    printf("2.mova a rainha\n");
    printf("3.mova a torre\n");
    printf("4.mova o cavalo\n");
/*CODIGO PARA ARMAZENAR A ESCOLHADO USUARIO*/
scanf("%d", &escolha);
/*SWITCHS PARA A IMPRESSAO DA ESCOLHA DO USUARIO*/

switch (escolha)
{
    case 1:
  moverbispo(bispo);

 break;
    
   case 2:
   moverrainha(rainha);
 break;
   

   case 3:
  movertorre(torre);

    break;
    /*CODIGO DO CAVALO*/
    case 4:

    do
    {
    for ( int i = 1; i <= 2; i++)
    {
        printf("cima\n");
        
    }
    printf("direita\n");
        break;
    } while (cavalo = 1);
    
break;
default:

printf("invalido");

break;
}   
return 0;
}  
