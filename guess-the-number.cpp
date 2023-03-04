#include <stdio.h>

main()
{
	int q;
	while(q!=7)
	{
		printf("ugadaite chislo\n");
		scanf("%i",&q);
		if(q>7)
		{
			printf("bolshe '?'\n");
		}
		else
		{
			if(q==7)
			{
				printf("verno\n");
				break;
			}
			else
			{
				printf("menshe '?'\n");
			}
			
		}
		if(q>10)
		{
			printf("bolshe 10\n");
		}
		else
		{
			printf("menshe 10\n");
		}
		if(q%2==0)
		{
			printf("delitsa na 2\n");
		}
		else
		{
			printf("ne delitsa na 2\n");
		}
		if(q%3==0)
		{
			printf("delitsa na 3\n");
		}
		else
		{
			printf("ne delitsa na 3\n");
		}
	}
	
}