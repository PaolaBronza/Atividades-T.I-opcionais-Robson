#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>


main(void){
	setlocale(LC_ALL, "portuguese");
	
//VARI�VEIS
	char name[40];
	
//IN�CIO C�DIGO	
	printf("Digite o seu nome: ");
	scanf("%s", &name);
	
	if(strcmp(name,"gato")==1){
		printf("essa palavra n�o � gato � a palavra %s",name);
	}
	else{
		printf("essa palavra cont�m gato");
	}
return 0;
}
