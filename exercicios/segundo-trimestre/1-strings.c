/*
 * Exercício 1 - Strings
 * Exercício sobre strings (e, de certa forma, matrizes)
 */

#include <stdio.h>

int main(void)
{
	int mapa[] = {20, 37, 1, 21, 4, 5, 2, 27, 9, 13};
	char anagrama[] = "TRES TIGRES TRISTES FALHARAM NA MISSAO";
	for (int i = 0; i < 10; ++i)
	{
		printf("%c", anagrama[mapa[i]]);
	}
	printf("\n");


	for (int i = 5; i < 19; ++i)
	{
		printf("%c", *(anagrama + i));
	}
	printf("\n");
}