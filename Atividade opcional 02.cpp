#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Insira sua idade: ");
	scanf("%d",&num);
	
	if(num>=18){
		printf("Voc� j� pode votar.");
	}
	else if(num<18){
		printf("Infelizmente voc� ainda n�o pode votar.");
	}
	return 0;
}
