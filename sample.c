#include <stdio.h>

int main(void)
{
	int a[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int i, j, tmp, z, b;

	int l = sizeof(a) / sizeof(a[0]);
	printf("%d\n\n", l);

	
	for (j = 1; j < l; j++)
	{
		for (i = 0; i < (l - 1); i++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;

				for (int b = 0; b < l; b++)
    			{
        			printf("%d", a[b]);
    			}
			}
		}
		printf("\n");
	}

	return 0;
}
