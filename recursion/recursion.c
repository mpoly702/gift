#include <stdio.h>

void countdown(int n)
{
	/*base case*/
	if (n == 0)
	{
		printf("Blastoff!\n");
	}
	else
	{
		/*recursive condition*/
		printf("%d", n);
		countdown(n - 1);/*recursive call*/
	}
}

int main(void)
{
	int i;

	i = 5;
	countdown(5);

	return(0);
}
