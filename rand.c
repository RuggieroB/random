/*
	# random

	# Programmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


		random

		Programmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


			Programma "rand.c": Programma in Linguaggio "C" che genera 5 numeri pseudocasuali appartenenti ad ognuno dei seguenti cinque gruppi:
				A) 50, 51, 52, 53, 54, 55;
				B) 2, 4, 6, 8, 10;
				C) 3, 5, 7, 9, 11;
				D) 6, 10, 14, 18, 22.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int i;

	srand(time(NULL));

	printf("Estrae 5 numeri dal gruppo:\tA) 50, 51, 52, 53, 54, 55;\n");

	for (i=0;i<5;i++)
	{

		printf("%d\t",50+rand()%6);

	}

	printf("\n\nEstrae 5 numeri dal gruppo:\tB) 2, 4, 6, 8, 10;\n");

	for (i=0;i<5;i++)
	{
	
		printf("%d\t",(1+rand()%5)*2);

	}

	printf("\n\nEstrae 5 numeri dal gruppo:\tC) 3, 5, 7, 9, 11;\n");

	for (i=0;i<5;i++)
	{

		printf("%d\t",(1+(1+rand()%5)*2));
	
	}

	printf("\n\nEstrae 5 numeri dal gruppo:\tD) 6, 10, 14, 18, 22.\n");

	for (i=0;i<5;i++)
	{

		printf("%d\t",2*(1+(1+rand()%5)*2));

	}

	putchar('\n');

	return 0;
}