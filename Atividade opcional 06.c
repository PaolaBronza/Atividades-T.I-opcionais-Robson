#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	float num,num2,num3;
	
	printf("Insira seu peso: ");
	scanf("%f",&num);
	printf("Insira sua altura: ");
	scanf("%f",&num2);
	printf("\nPeso inserido: %fkg",num);
	printf("\nAltura inserida: %fm",num2);
	num3=num/pow(num2,2);
	printf("\nIMC: %f",num3);
	
	if(num3>18.5&&num<24.9){
		printf("\nEstá no peso ideal.");
	}
	else if(num3<18){
		printf("\nEstá abaixo do peso.");
	}
	else if(num3>24.9){
		printf("\nEstá acima do peso.");
	}
	return 0;
}
