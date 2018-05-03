#include<stdio.h>



int main(){
	int a[14] = {0,1};
	int i = 0;	

	while(i < 12){ 
		a[i+2] += a[i] + a[i+1]; 
		printf("%i + %i = %i\n", a[i+1], a[i], a[i+2]); 
		i++;
	}

    return 0;
}

