#include <stdio.h>


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
 char nome[50];
 int codigo;
 int populacao;
 int area;
 int pib; 
 int pontoturistico;  
 int escolha1;
 int escolha2;
 int resultado1 = 0;
int resultado2 = 0;
char vencedor [50];
 
/*CADASTRO DA CARTA 1*/
printf("cidade: \n", nome);
scanf(" %s", &nome);

printf(" codigo: \n", codigo);
scanf(" %d", &codigo);


printf("populaçao: \n", populacao);
scanf(" %d", &populacao);

printf("area: \n", area);
scanf(" %d", &area);

printf("pib: \n ", pib);
scanf(" %d", &pib);

printf("ponto turistico:\n",  pontoturistico);
scanf(" %d", &pontoturistico);

  char nome2 [50];
 int codigo2;
 int populacao2;
 int area2;
  long long int  pib2; 
 int pontoturistico2;

 /*CADASTRO DA CARTA 2*/
printf("cidade: \n", nome2);
scanf(" %s", &nome2);

printf("codigo: \n", codigo2);
scanf(" %d", &codigo2);


printf("populaçao: \n", populacao2);
scanf(" %d", &populacao2);

printf("area: \n", area2);
scanf(" %d", &area2);

printf("pib: \n ", pib2);
scanf(" %lld", &pib2);

printf("ponto turistico:\n",  pontoturistico2);
scanf(" %d", &pontoturistico2);

/*CALCULO DA DENSIDADE POPULACIONAL DA CARTA 1 & 2 */
double densidadepopulacional =(double) populacao  / area;
double pibpercapita =( double ) pib / populacao;

double densidadepopulacional2 =(double) populacao2  / area2;
double pibpercapita2 =( double ) pib2 / populacao2;

/*IMPRESSAO DOS DADOS DAS CARTAS INSERIDOS PELO USUARIO*/
;printf("\ncidade: %s\n", nome);
printf("codigo: %d\n", codigo);
printf("populaçao: %d\n", populacao);
printf("area: %d\n", area);
printf("pib: %lld\n ", pib);
printf("ponto turistico: %d\n",  pontoturistico);
printf("densidade populacional:%.2f\n", densidadepopulacional);
printf("pib per capita:%.2f\n\n", pibpercapita);


printf("cidade: %s\n", nome2);
printf("codigo: %d\n", codigo2);
printf("populaçao: %d\n", populacao2);
printf("area: %d\n", area2);
printf("pib: %lld\n ", pib2);
printf("ponto turistico: %d\n",  pontoturistico2);
printf("densidade populacional:%.2f\n", densidadepopulacional2);
printf("pib per capita:%.2f\n\n", pibpercapita2);

/*OPÇOES DE QUAIS ATRIBUTOS VAO SER COMPARADOS*/
printf("escolha 2 atributos a serem comparados\n");
printf("1.populaçao\n");
printf("2.area\n");
printf("3.pib\n");
printf("4.pontos turisticos\n");
printf("5.densidade populacional\n");
printf("6.pib per capita\n");
printf("7.geral\n");

printf("escolha o primeiro:\n");
scanf("%d", &escolha1);

/*USO DO SWITCH PARA CASO A OPÇAO 7 SER ESCOLHIDA, USANDO IFS PARA DECIDIR QUAL OS ATRIBUTOS VENCEDORES E PRINTF PARA IMPRIMIR OS RESULTADOS*/
switch(escolha1){
case 7:
if( populacao > populacao2){
    resultado1 += 1; 
printf("%s populaçao +1\n", nome); 
 ; 
}else{
    printf("%s populaçao +1\n",nome2);
     resultado2 += 1;
}
if( area > area2){
printf("%s area +1\n", nome);
 resultado1 += 1; 
}else{
    printf("%s area +1\n",nome2);
      resultado2 += 1;
}

if( pib > pib2){
printf("%s pib +1\n", nome);
resultado1 += 1; 
}else{
    printf("%s pib +1\n",nome2);
      resultado2 += 1;
}

if( pontoturistico > pontoturistico2){
printf("%s pontos turisticos +1\n", nome);
resultado1 += 1; ;
}else{
    printf("%s pontos turisticos +1\n",nome2);
      resultado2 += 1;
}

if( !(densidadepopulacional > densidadepopulacional2)){
printf("%s densidade populacional +1\n", nome);
resultado1 += 1;  
}else{
    printf("%s densidade populacional +1\n",nome2);
    resultado2 += 1;
}

if( pibpercapita > pibpercapita2){
printf("%s pib per capita +1\n\n", nome);
 resultado1 += 1; 
}else{
    printf("%s pib per capita +1\n\n",nome2);
      resultado2 += 1;
}




if( resultado1 > resultado2 ){
printf("GANHADOR: %s +%d\n %s +%d\n", nome, resultado1, nome2, resultado2);
} if (resultado1 < resultado2) {
    printf(" GANHADOR: %s +%d\n %s +%d \n", nome2, resultado2, nome, resultado1);
} if (resultado1 == resultado2){
    printf(" EMPATE\n %s +%d\n %s +%d \n", nome, resultado1, nome2, resultado2);
} 
 return 0;
break;
}
/*IMPRESSSAO DO PRIMEIRO ATRIBUTO ESCOLHIDO, AINDA USANDO O SWITCH & IF*/
printf("escolha o segundo:\n");
scanf("%d", &escolha2);

switch (escolha1){
case 1:
if( populacao > populacao2){ 
    printf("GANHADOR: %s POPULAÇAO: %d\n PERDEDOR: %s POPULAÇAO:%d\n", nome, populacao, nome2, populacao2);
    resultado1 += 1; 
} else if (populacao2 > populacao) {

    printf(" GANHADOR: %s POPULAÇAO: %d\n PERDEDOR: %s POPULAÇAO:%d \n", nome2, populacao2, nome,  populacao);
}  else{
    printf("empate\n");
} 
    break;
case 2:
if( area > area2){ 
    printf("GANHADOR: %s area: %d\n PERDEDOR: %s area:%d\n", nome, area, nome2, area2);
    resultado1 += 1; 
} else if (area2 > area) {

    printf(" GANHADOR: %s area: %d\n PERDEDOR: %s area:%d \n", nome2, area2, nome,  area);
}    else{
    printf("empate\n");
} 
break;
case 3:
if( pib > pib2){ 
    printf("GANHADOR: %s pib: %d\n PERDEDOR: %s pib:%d\n", nome, pib, nome2, pib2);
    resultado1 += 1; 
} else if (pib2 > pib) {

    printf(" GANHADOR: %s pib: %d\n PERDEDOR: %s pib:%d \n", nome2, pib2, nome,  pib);
}  else{
    printf("empate\n");
}
break;
case 4: if( pontoturistico > pontoturistico2){ 
    printf("GANHADOR: %s pontos turisticos: %d\n PERDEDOR: %s pontos turisticos:%d\n", nome, pontoturistico, nome2, pontoturistico2);
    resultado1 += 1; 
} else if (pontoturistico2 > pontoturistico) {

    printf(" GANHADOR: %s pontos turisticos: %d\n PERDEDOR: %s pontos turisticos:%d \n", nome2, pontoturistico2, nome,  pontoturistico);
}else{
        printf("empate\n");
} 
break;  
case 5: if (!(densidadepopulacional > densidadepopulacional2)){ 
    printf("GANHADOR: %s densidade populacional: %.2f\n PERDEDOR: %s densidade populacional:%f.2\n", nome, densidadepopulacional, nome2, densidadepopulacional2);
    resultado1 += 1; 
} else if (!(densidadepopulacional2 > densidadepopulacional)) {

    printf(" GANHADOR: %s densidade populacional: %.2f\n PERDEDOR: %s densidade populacional:%.2f \n", nome2, densidadepopulacional2, nome,  densidadepopulacional);
}  else{
    printf("empate\n");
} 
break; 
case 6: if( pibpercapita > pibpercapita2){ 
    printf("GANHADOR: %s pib per capita: %.2f\n PERDEDOR: %s pib per capita:%.2f\n", nome, pibpercapita, nome2, pibpercapita2);
    resultado1 += 1; 
} else if (densidadepopulacional2 > densidadepopulacional) {

    printf(" GANHADOR: %s pib per capita: %.2f\n PERDEDOR: %s pib per capita:%.2f \n", nome2, pibpercapita2, nome,  pibpercapita);
}  else{
    printf("empate\n");
} 


break;
default:
printf("invalido\n");
    break;

}
/*IMPRESSAO DA SEGUNDA ESCOLHA. */
switch (escolha2){
    case 1:
    if( populacao > populacao2){ 
        printf("GANHADOR: %s POPULAÇAO: %d\n PERDEDOR: %s POPULAÇAO:%d\n", nome, populacao, nome2, populacao2);
    } else if (populacao2 > populacao) {
    
        printf(" GANHADOR: %s POPULAÇAO: %d\n PERDEDOR: %s POPULAÇAO:%d \n", nome2, populacao2, nome,  populacao);
        resultado2 += 1;
    }  else{
        printf("empate\n");
    } 
        break;
    case 2:
    if( area > area2){ 
        printf("GANHADOR: %s area: %d\n PERDEDOR: %s area:%d\n", nome, area, nome2, area2);
    } else if (area2 > area) {
        resultado2 += 1;
        printf(" GANHADOR: %s area: %d\n PERDEDOR: %s area:%d \n", nome2, area2, nome,  area);
    }    else{
        printf("empate\n");
    } 
    break;
    case 3:
    if( pib > pib2){ 
        printf("GANHADOR: %s pib: %d\n PERDEDOR: %s pib:%d\n", nome, pib, nome2, pib2);
    } else if (pib2 > pib) {
        resultado2 += 1;
        printf(" GANHADOR: %s pib: %d\n PERDEDOR: %s pib:%d \n", nome2, pib2, nome,  pib);
    }  else{
        printf("empate\n");
    }
    break;
    case 4: if( pontoturistico > pontoturistico2){ 
        printf("GANHADOR: %s pontos turisticos: %d\n PERDEDOR: %s pontos turisticos:%d\n", nome, pontoturistico, nome2, pontoturistico2);
    } else if (pontoturistico2 > pontoturistico) {
        resultado2 += 1;
        printf(" GANHADOR: %s pontos turisticos: %d\n PERDEDOR: %s pontos turisticos:%d \n", nome2, pontoturistico2, nome,  pontoturistico);
    }else{
            printf("empate\n");
    } 
    break;  
    case 5: if (!(densidadepopulacional > densidadepopulacional2)){ 
        printf("GANHADOR: %s densidade populacional: %.2f\n PERDEDOR: %s densidade populacional:%f.2\n", nome, densidadepopulacional, nome2, densidadepopulacional2);
    } else if (!(densidadepopulacional2 > densidadepopulacional)) {
        resultado2 += 1;
        printf(" GANHADOR: %s densidade populacional: %.2f\n PERDEDOR: %s densidade populacional:%.2f \n", nome2, densidadepopulacional2, nome,  densidadepopulacional);
    }  else{
        printf("empate\n");
    } 
    break; 
    case 6: if( pibpercapita > pibpercapita2){ 
        printf("GANHADOR: %s pib per capita: %.2f\n PERDEDOR: %s pib per capita:%.2f\n", nome, pibpercapita, nome2, pibpercapita2);
    } else if (densidadepopulacional2 > densidadepopulacional) {
        resultado2 += 1;
        printf(" GANHADOR: %s pib per capita: %.2f\n PERDEDOR: %s pib per capita:%.2f \n", nome2, pibpercapita2, nome,  pibpercapita);
    }  else{
        printf("empate\n");
    } 
break;

    default:
printf("invalido\n");
    break;


}
/*IFS PARA DECIDIR O VENCEDOR OU EMPATE*/
if (resultado1 > resultado2){ 
printf("\nVENCEDOR:%s\n", nome);
} else if (resultado1 < resultado2){
printf("VENCEDOR:%s\n", nome2);
}
else {
    printf("\nEMPATE\n");
}

}