/*
 * Exercício 3 - Comparações
 * Exercício sobre comparadores e seu uso em conjunto dao if
 */

#include <stdio.h>

int main(void)
{
	int titulos_da_meca = 1;
	int titulos_da_tro = 5;

	if(titulos_da_tro > titulos_da_meca) {
		puts("dale tro");
	}
	else {
		puts("a meca é rei");
	}



	if('0') {
		puts("kopper lindo");
	}
	if('\0') {
		puts("gui lindo");
	}
	if(0) {
		puts("vamo tnt");
	}



	if ((1 || 0) & (1 & 0)) {
		puts("oficio");
	}
	else {
		puts("força eletro");
	}

	return 0;
}