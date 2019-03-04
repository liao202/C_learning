#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct Coefficient 
{
	int a;
	int b;
	int c;
};

typedef struct Coefficient Coefficient;

int randomNumber()
{
	return 1 + rand() % (20 - 1 + 1);
}

void coefficientInit(Coefficient* c)
{
	c->a = randomNumber();
	c->b = randomNumber();
	c->c = randomNumber();
}

void quadraticEquationDisplay(const Coefficient* c)
{
	printf("The quadratic equation is: %dx^2 + %dx + %d = 0\n",
		c->a, c->b, c->c);
}

void equationSolute(const Coefficient* c)
{
	int ¡÷ = c->b * c->b - 4 * c->a * c->c;
	if (¡÷ < 0)
	{
		printf("No Solution!\n");
		return;
	}
	else if (¡÷ > 0)
	{
		double x1 = (-c->b + sqrt(¡÷)) / (2 * c->a);
		double x2 = (-c->b - sqrt(¡÷)) / (2 * c->a);
		printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
		return;
	}
	else
	{
		double x = (-c->b) / (2 * c->a);
		printf("x1 = x2 = %.2f\n", x);
		return;
	}
}

int main()
{
	srand((unsigned int)time(0));
	Coefficient c;
	coefficientInit(&c);
	quadraticEquationDisplay(&c);
	equationSolute(&c);
	system("pause");
	return 0;
}