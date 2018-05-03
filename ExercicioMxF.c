#include<stdio.h> 
#include<stdlib.h> 

int main (){ 
float altura, menor=3, soma=0,maior=0, media=0; 
char sexo, sexo_Mais_Alta; 
int mulheres=0, homens=0,i, confirma=0; 

for(i=0; i<15; i++){ 

printf("\n\t Pessoa %d >> \n\n\t\t Altura: ",i+1); 
scanf("%f",&altura); 
printf("\n\t\t Sexo: m x f?: "); 
scanf("%s",&sexo); 

	if ( sexo == 'm'){ 
		homens++; 
	} 

	else if(sexo == 'f'){ 
		mulheres++; 
		soma = soma + altura; 
		media = soma/mulheres; 
} 
	else{ 
		printf("\n\tSabe Ler nao? Eh pra Digitar m ou f !!\n"); 
		i=i-1; 
		continue; 
} 
	if(altura > maior){ 
		sexo_Mais_Alta = sexo; 
		maior = altura; 
} 
	if(altura < menor)
	menor = altura; 
} 
		printf("\n\n\t -------------------- RESULTADOS ----------------\n\n"); 
		printf(" \tMenor altura do grupo >> %.2f", menor); 
		printf(" \n\n\tMedia das alturas das mulheres >> %.2f", media); 
		printf(" \n\n\tNumero de homens >> %d", homens); 
		printf(" \n\n\tO sexo da pessoa mais alta >> %c \n\n\n",sexo_Mais_Alta); 

system("pause"); 
return 0; 
}
