#include <stdio.h>

main()
{
	int i, j = 0, tab =  0;
	for (i = 1; i <=10; i++)
	{
		for (j = 1; j <=10; j++)
		{
			tab = i * j;
			printf(" %d x %d = %d\n", i, j, tab);
		} 
	}  
}
