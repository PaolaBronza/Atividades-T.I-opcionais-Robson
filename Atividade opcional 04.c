#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Insira um número: ");
	scanf("%d",&num);
	
	if(num %3 ==0||num %5 ==0){
		printf("O número %d é divisível por 3 ou 5",num);
	}
	else{
		printf("O número %d não é divisível por 3 ou 5",num);
	}
	return 0;
}
