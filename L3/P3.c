#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, a[50];
	printf("Numarul de elemente : \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (((a[i] < 31) | 0) == 0)
			printf("%d este par \n", a[i]);
		else
			printf("%d este impar\n", a[i]);

	}
	system("pause");
	return 0;
}