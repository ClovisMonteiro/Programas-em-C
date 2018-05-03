#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero, meses,op, numeroRecente=0, numeroAntigo=0, mesesAntigo=5, mesesRecente=1;
		
	for (int i = 1; i<7; i++){
		printf("Digite o numero do funcionario: ");
		scanf("%d", &numero);
		printf("Digite o numero de meses trabalhados: ");
		scanf("%d", &meses);		
	
			if (meses < mesesRecente){
				mesesRecente = meses;
				numeroRecente = numero;
			}
			if (meses > mesesAntigo){
				mesesAntigo = meses;
				numeroAntigo = numero;
			}	
			
	}	
 	printf("O funcionario %d eh o mais novo na empresa, trabalhando a %d meses\n", numeroRecente, mesesRecente );
	printf("O funcionario %d eh o mais antigo na empresa, trabalhando a %d meses", numeroAntigo, mesesAntigo);	
}
