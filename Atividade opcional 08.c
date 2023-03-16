#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>


main(void){
	setlocale(LC_ALL, "portuguese");
	
//VARIÁVEIS
	char name[40];
	
//INÍCIO CÓDIGO	
	printf("Digite o seu nome: ");
	scanf("%s", &name);
	
	if(strcmp(name,"gato")==1){
		printf("essa palavra não é gato é a palavra %s",name);
	}
	else{
		printf("essa palavra contém gato");
	}
return 0;
}
