#include <stdio.h>

int factorielle(int i);
int main(void)
{
	int i = 3;
	printf("%i\n", factorielle(i));
}

int factorielle(int i)
{
	if (i==1)
	{
	return 1;
	}
	return factorielle(i-1)*i;
}
