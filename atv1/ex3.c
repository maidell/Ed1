#include <stdio.h>

int	main(void)
{
	int x;
	int y;

	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Digite mais um numero: ");
	scanf("%d", &y);

	printf("x = %d\nj = %d\n", x, y);
	if (&x > &y)
	{
		printf("A variavel com maior endereço é x e contem = %d\n", x);
		return (0);
	}
	printf("A variavel com maior endereço é y e contem = %d\n", y);
}