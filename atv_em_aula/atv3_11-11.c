#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX 50

//Consome o stdin até uma quebra de linha
void	clean_stdin(void)
{
	char	buffer[TAM_MAX];

	while (strlen(fgets(buffer, TAM_MAX, stdin)) == TAM_MAX - 1);
}

//cria o arquivo e escreve o nome do arquivo que foi digitado na entrada padrão
FILE	*create_file(void)
{
	FILE	*p;
	char	str[TAM_MAX];

	printf("\n\n Entre com um nome para o arquivo:\n");
	fgets(str, TAM_MAX, stdin);
	if (!(p = fopen(str, "w")))
	{
		printf("Erro! Impossivel abrir o arquivo!\n");
		exit(1);
	}
	fprintf(p, "Este e um arquivo chamado: %s\n", str);
	return (p);
}

//Printa a string lida na entrada padrão, em uppercase dentro do arquivo.
void	print_upper_case(const char *str, FILE *p)
{
	while (*str)
	{
		putc(toupper(str[0]), p);
		str++;
	}
}

int	main(void)
{
	FILE *p;
	char c, str[TAM_MAX];
	char frase_e[TAM_MAX];
	int i;

	p = create_file();
	for (i = 1; i <= 5; i++)
	{
		int j = 0;
		printf("Digite a %d frase:", i);
		fgets(frase_e, TAM_MAX, stdin);
		if (strlen(frase_e) > 40)
		{
			printf("Você digitou uma frase maior que 40 caracteres,	tente novamente\n");
			i--;
			clean_stdin();
		}
		else if (strlen(frase_e) <= 40)
		{
			fprintf(p, "Essa é a %dª frase digitada: ", i);
			print_upper_case(frase_e, p);
		}
	}
	fclose(p);

	return (0);
}