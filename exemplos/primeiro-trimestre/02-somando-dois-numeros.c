/**
 * Exemplo 02 - Somando dois números
 * 
 * Nesse exemplo, vemos como podemos somar dois números. 
 * Além disso, vemos como é possível mostrar um número na tela
 */

#include <stdio.h>

int main(void)
{
	/**
	 * Para realizar a soma em si, utilizamos o operador +
	 * Para imprimir o resultado, utilizamos a função printf (print formatted, imprimir com formatação)
	 * A formatação do printf funciona da seguinte maneira:
	 * 		O primeiro argumento será o "modelo" a ser impresso na tela
	 * 		Tudo que começar com % será considerado uma "lacuna" a ser preenchida por algum valor
	 * 		No caso, utilizamos %d, o d indicando que iremos imprimir um número (TODO: referenciar tabela)
	 * 		Ao contrário da função puts, o printf não insere um "enter" (quebra de linha) após a mensagem,
	 * 			logo inserimos nós mesmos. Na linguagem C, sequências começadas em \ são consideradas "escapadas",
	 * 			se transformando em caracteres de controle. No caso, a sequência \n é impressa como um enter.
	 */
	printf("2 + 2 = %d \n", 2 + 2);
	return 0;
}