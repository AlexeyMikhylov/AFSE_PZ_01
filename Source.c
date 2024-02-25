#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0.0, b = 0.0, c = 0.0; // коэффициенты при неизвестных
	float x1, x2, D; // корни уравнения, дискриминант

	puts("Input coefficients of equation:\n");
	//ввод коэффициентов с клавиатуры
	/*printf("a = "); scanf("%f", &a);
	printf("b = "); scanf("%f", &b);
	printf("c = "); scanf("%f", &c);*/

	if (scanf("%f", &a) > 0)
	{
		printf("a = %g\n", a);
	}
	else printf("Not a number.\n");
	
	if (scanf("%f", &b) > 0)
	{
		printf("b = %g\n", b);
	}
	else printf("Not a number.\n");
	
	if (scanf("%f", &c) > 0)
	{
		printf("c = %g\n", c);
	}
	else printf("Not a number.\n");

	//Вывод полученного уравнения
	printf("Inputted equation is:\n%g * x^2 + %g * x + %g = 0.00 \n", a, b, c);

	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				puts("x1 and x2 are any numbers");
			}
			else {
				puts("No solutions");
			}
		}
		else if (c == 0)
		{
			x1 = x2 = 0;
			printf("x = %g\n", x1);
		}
		else
		{
			x1 = x2 = (float)( -1 * (c / b));
			printf("x = %g\n", x1);
		}
	}
	else
	{
		if (b == 0)
		{
			if (c == 0)
			{
				x1 = x2 = 0;
				printf("x = %g\n", x1);
			}
			else if ( (a > 0 && c < 0) || (a < 0 && c > 0) )
			{
				x1 = x2 = (float)sqrt(-1 * (c / a));
				printf("x = %g\n", x1);
			}
			else
			{
				puts("No solutions");
			}
		}
		else
		{
			if (c == 0)
			{
				x1 = 0;
				x2 = (float)(-1 * (b / a));
				printf("x1 = %g\nx2 = %g\n", x1, x2);
			}
			else
			{
				D = (float)(pow(b, 2) - 4 * a * c);

				if (D >= 0)
				{
					x1 = (float)(-1 * b - sqrt(D)) / (2 * a);
					x2 = (float)(-1 * b + sqrt(D)) / (2 * a);

					if (x1 == x2)
					{
						printf("x = %g\n", x1);
					}
					else
					{
						printf("x1 = % g\nx2 = % g\n", x1, x2);
					}
				}
				else
				{
					puts("No solutions");
				}
			}
		}
	}
}