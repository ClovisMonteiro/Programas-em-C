#include<stdio.h>
#include<stdlib.h>

main(){
	float nota1, nota2, trabalho, total;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a nota do trabalho: ");
	scanf("%f", &trabalho);
	
	total = ((nota1 * 3) + (nota2 * 3) + (trabalho)) / 7;
	
	printf("Nota final: %.2f ", total );
	
		if(total >= 7 ){
			printf("REPROVADO!!!");
		}
		else if (total < 7){
			printf("REPROVADO!!!");
		}
}
