#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Insira um número: ");
	scanf("%d",&num);
	
	if(num %2 ==0){
		printf("O número %d é par.",num);
	}
	else{
		printf("O número %d é ímpar.",num);
	}
	return 0;
}
