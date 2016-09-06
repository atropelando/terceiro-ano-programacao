/*
 * Exercício 4 - Laços de repetição
 * Exercício sobre laços de repeticção usando for e while
 */

#include <stdio.h>

int main(void)
{
	int pontos_tnt = 13627;
	int pontos_tro = 13651;

	while(pontos_tro > pontos_tnt) {
	    puts("oficio");
	    pontos_tnt += 10;
	}


	for (int i = 1; i < 10; ++i)
	{
		printf("%d %s %s muita gente\n", i, (i == 1) ? "Nicole" : "Nicoles", (i == 1) ? "incomoda" : "incomodam");
		printf("%d Nicoles ", i + 1);
		for (int j = 0; j < (i+1); ++j)
		{
			printf("incomodam ");
		}
		printf("muito maaaiss\n");
	}


	char a = 'A';
	while(1) {
	    printf("%c\n", a);
	    a++;
	    if(a == 'K') break;
	}

	return 0;
}