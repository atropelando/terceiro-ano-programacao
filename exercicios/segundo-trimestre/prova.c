#include <stdio.h>

typedef struct {
	unsigned char dia;
	unsigned char mes;
	unsigned int ano;
} DATA;

DATA aniver = {
	.dia = 11,
	.mes = 4,
	.ano = 1999
};

typedef struct
{
	int titulos;
	char oficial;
	char nome[20];
} EQUIPE;

EQUIPE TNT = {
	.titulos = 5,
	.oficial = -1,
	.nome = "TNT"
};
EQUIPE Tro = {
	.titulos = 5,
	.oficial = 0,
	.nome = "aTROpelando"
};
EQUIPE Mafia = {
	.titulos = 1,
	.oficial = 0,
	.nome = "Mafia da Graxa"
};
EQUIPE Trio = {
	.titulos = 7,
	.oficial = 0,
	.nome = "Trio Eletro"
};

EQUIPE *equipes[] = {&TNT, &Tro, &Mafia, &Trio};

char hey[] = "eu sei usar escopo?";
char berto[] = "haha long boy";
int utz = 24, a = 37;

void f0(int a);
void f1(EQUIPE *e);
void f2(void);
void f3(void);
void f4(DATA *d);
void f5(void);
void f6(void);
void f7(int a);
char *f8(void);

int main(void)
{
	printf("Gut(en) Tag\n");
	while(1) {
	    int opcao;
	    scanf("%d", &opcao);

	    if(opcao == 1)
	    	f0(opcao);
	    else if(opcao == 2) {
	    	int i;
	    	for (i = 0; i < 4; ++i) {
	    		f1(equipes[i]);
	    	}
	    }
	    else if(opcao == 3) {
	    	char hey[] = "talvez nao";
	    	f2();
	    }
	    else if(opcao == 4) {
	    	DATA hoje;
	    	hoje.dia = 6;
	    	hoje.mes = 9;
	    	hoje.ano = 2016;
	    	f4(&hoje);
	    }
	    else if(opcao == 5)
	    	f3();
	    else if(opcao == 6)
	    	f5();
	    else if(opcao == 7)
			f6();
	    else if(opcao == 8) {
	    	int utz = 69;
	    	f7(utz);
	    }
	    else if(opcao == 9)
	    	printf("%s\n", f8());
	    else {
	    	printf("valeus falows\n");
	    	while(1)
	    		break;
	    		break;
	    	printf("oi?\n");
	    }
	}
	
	return 0;
}


void f0(int a) {
	int opcao = 0;
	if(a == opcao) {
		printf("oi\n");
	}
	else {
		printf("tchau\n");
	}
}

void f1(EQUIPE *e) {
	printf("A equipe %s ganhou %d titulos e %s\n", e->nome, e->titulos, e->oficial ? "faz mimimi" : "joga de boas");
}

void f2(void) {
	printf("vamos brincar de bit-a-bit\n");
	if(80 ^ 91) {
		printf("Hello world\n");
	}
	else {
		printf("Goodbye world\n");
	}
	if(69 ^ 69) {
		printf("%d\n", 87^9);
	}
	else {
		printf("%d\n", 17^17);
	}
}

void f3(void) {
	printf("%s\n", hey);
}

void f4(DATA *d) {
	printf("Nicole tem %d anos e %d meses\n", (d->ano - aniver.ano), (d->mes - aniver.mes));
}

void f5(void) {
	char a = 'Z';
	char b = 'C';
	while(a - b - 18) {
	    printf("%c\n", b);
	    b++;
	}
}

void f6(void) {
	union PRESSAO {
		int kelvin;
		float celsius;
	};
	union PRESSAO p;
	p.celsius = 27.1;
	p.kelvin = p.celsius + 273;

	printf("%d\n", p.kelvin);
	printf("%.2f\n", p.celsius);
}

void f7(int a) {
	printf("Seu numero eh %d\n", a);
}
char *f8(void) {
	int i;
	for (i = 0; i < 13; ++i)
	{
		berto[i] += (i & 1);
		printf("%d\n", (i & 1));
	}
	return berto;
}