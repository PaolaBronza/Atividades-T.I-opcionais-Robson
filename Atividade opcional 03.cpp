#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Insira a temperatura: ");
	scanf("%d",&num);
	printf("Temperatura inserida: %d�C",num);
	
	if(num<0){
		printf("\nA temperatura est� abaixo de 0�C");
	}
	else if (num>0){
		printf("\nA temperatura est� acima de 0�C");
	}
	else if (num=0){
		printf("\nA temperatura � 0�C");
	}
	return 0;
}
