#include <stdio.h>
#include <stdbool.h>

bool nombrepair(int nombre);
//déclarer prototype de la fonction au début sinon il comprend pas ce que c'est
//nombre pair

int main(void)
{
	int nombre = 18;
	if (nombrepair(nombre))
	{
		printf("%i\n", nombre);
	}
}	

bool nombrepair(int nombre)
{
	if (nombre % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
