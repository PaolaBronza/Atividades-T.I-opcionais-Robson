#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Insira um n�mero: ");
	scanf("%d",&num);
	
	if(num %2 ==0){
		printf("O n�mero %d � par.",num);
	}
	else{
		printf("O n�mero %d � �mpar.",num);
	}
	return 0;
}
