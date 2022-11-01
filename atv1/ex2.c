#include <stdio.h>

int	main(void)
{
	int x = 0;
	float y = 0.1;
	char z = 'a';
	int *xp;
	float *yp;
	char *zp;

	printf("Valor original na variavel x = %d\n"
	"Valor original na variavel y = %f\n"
	"Valor original na variavel z = %c\n", x , y, z);

	xp = &x;
	yp = &y;
	zp = &z;

	*xp = 1;
	*yp = 1.2;
	*zp = 'z';

	printf("Novo valor na variavel x = %d\n"
	"Novo valor na variavel y = %f\n"
	"Novo valor na variavel z = %c\n", x, y, z);

}