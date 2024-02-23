#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0.0, b = 0.0, c = 0.0; //
	float x1, x2, d; //

	puts("Input a, b, c:\n");
	printf("a = "); scanf("%f", &a);
	printf("b = "); scanf("%f", &b);
	printf("c = "); scanf("%f", &c);

	printf("Equation is:\n%.2f * x^2 + %.2f * x + %.2f = 0.00 \n", a, b, c);

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
			printf("x = %.2f\n", x1);
		}
		else
		{
			x1 = x2 = (float)( -1 * (c / b));
			printf("x = %.2f\n", x1);
		}
	}
	else
	{
		if (c == 0)
		{
			if (b == 0)
			{
				x1 = x2 = 0;
				printf("x = %.2f\n", x1);
			}
			else
			{
				x1 = 0;
				x2 = (float)(-1 * (b / a));
				printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);

			}
		}
		else
		{
			if (b == 0 && ((a > 0 && c < 0) || (a < 0 && c > 0)))
			{
				x1 = x2 = (float)sqrt(-1 * (c / a));
				printf("x = %.2f\n", x1);

			}
			else
			{
				d = (float)(pow(b, 2) - 4 * a * c);
				if (d >= 0)
				{
					x1 = (float)(-1 * b - sqrt(d)) / (2 * a);
					x2 = (float)(-1 * b + sqrt(d)) / (2 * a);

					if (x1 == x2)
					{
						printf("x = %.2f\n", x1);
					}
					else
					{
						printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
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