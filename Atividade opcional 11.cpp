#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2,num3;
	
	printf("Insira um n�mero: ");
	scanf("%d",&num);
	printf("Insira um n�mero: ");
	scanf("%d",&num2);
	num3=num+num2;
	printf("%d+%d=%d",num,num2,num3);
	
	if(num3 %2 ==0){
		printf("\nPar");
	}
	else{
		printf("\n�mpar");
	}
	return 0;
}
