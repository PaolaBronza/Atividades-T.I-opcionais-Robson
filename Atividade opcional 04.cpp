#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Insira um n�mero: ");
	scanf("%d",&num);
	
	if(num %3 ==0||num %5 ==0){
		printf("O n�mero %d � divis�vel por 3 ou 5",num);
	}
	else{
		printf("O n�mero %d n�o � divis�vel por 3 ou 5",num);
	}
	return 0;
}
