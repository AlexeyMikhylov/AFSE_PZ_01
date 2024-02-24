#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0.0, b = 0.0, c = 0.0; //
	char outputEquation[256];
	char outputResult[256];
	float x1, x2, d; //

	puts("Input a, b, c:\n");
	printf("a = "); scanf("%f", &a);
	printf("b = "); scanf("%f", &b);
	printf("c = "); scanf("%f", &c);

	sprintf(output, "Equation is:\n%g * x^2 + %g * x + %g = 0.00 \n", a, b, c);
	puts(output);

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
			sprintf(outputResult, "x = %g\n", x1);
			puts(outputResult);
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
				sprintf(outputResult, "x = %g\n", x1);
				puts(outputResult);
			}
			else
			{
				x1 = 0;
				x2 = (float)(-1 * (b / a));
				sprintf(outputResult, "x1 = %g\nx2 = %g\n", x1, x2);
				puts(outputResult);

			}
		}
		else
		{
			if (b == 0 && ((a > 0 && c < 0) || (a < 0 && c > 0)))
			{
				x1 = x2 = (float)sqrt(-1 * (c / a));
				sprintf(outputResult, "x = %g\n", x1);
				puts(outputResult);
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
						sprintf(outputResult, "x = %g\n", x1);
						puts(outputResult);
					}
					else
					{
						sprintf(outputResult,"x1 = %g\nx2 = %g\n", x1, x2);
						puts(outputResult);
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