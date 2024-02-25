#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0.0, b = 0.0, c = 0.0; // коэффициенты при неизвестных
	float x1, x2, D; // корни уравнения, дискриминант

	puts("Input coefficients of equation:\n");
	//ввод коэффициентов с клавиатуры
	printf("a = ");
	if (scanf("%f", &a) > 0){}
	else puts("Not a number");
	
	printf("b = ");
	if (scanf("%f", &b) > 0){}
	else puts("Not a number");
	
	printf("c = ");
	if (scanf("%f", &c) > 0){}
	else puts("Not a number");

	//Вывод полученного уравнения
	printf("Inputted equation is:\n%g*x^2 + %g*x + %g = %g \n", a, b, c, 0.00);

	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0) //a, b, c равны нулю
			{
				puts("x1 and x2 are any numbers");
			}
			else // a, b равны нулю, c не равен нулю
			{
				puts("No solutions");
			}
		}
		else if (c == 0) // a, c равны нулю, b не равен нулю
		{
			x1 = x2 = 0;
			printf("x = %g\n", x1);
		}
		else // a равен нулю, b и с не равны нулю 
		{
			x1 = x2 = (float)( -1 * (c / b));
			printf("x = %g\n", x1);
		}
	}
	else
	{
		if (b == 0)
		{
			if (c == 0) //a не равен нулю, b, c равны нулю
			{
				x1 = x2 = 0;
				printf("x = %g\n", x1);
			} // a, c не равны нулю, b равен нулю и (a > 0 и c < 0) или (a < 0 и c > 0)
			else if ((a > 0 && c < 0) || (a < 0 && c > 0))
			{
				x1 = x2 = (float)sqrt(-1 * (c / a));
				printf("x = %g\n", x1);
			} // a, c не равны нулю, b равен нулю и (a < 0 и c < 0) или (a > 0 и c > 0)
			else
			{
				puts("No solutions");
			}
		}
		else
		{
			if (c == 0) // a, b не равны нулю, с равен нулю
			{
				x1 = 0;
				x2 = (float)(-1 * (b / a));
				printf("x1 = %g\nx2 = %g\n", x1, x2);
			}
			else
			{
				//Вычисление дискриминанта
				D = (float)(pow(b, 2) - 4 * a * c);

				if (D >= 0)
				{
					//Вычисление корней уравнения при D>=0
					x1 = (float)(-1 * b - sqrt(D)) / (2 * a);
					x2 = (float)(-1 * b + sqrt(D)) / (2 * a);

					if (x1 == x2) //дискриминант равен нулю
					{
						printf("x = %g\n", x1);
					}
					else //дискриминант больше нуля
					{
						printf("x1 = % g\nx2 = % g\n", x1, x2);
					}
				}
				else //дискриминант меньше нуля
				{
					puts("No solutions");
				}
			}
		}
	}

	return 0;
}