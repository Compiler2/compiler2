#define NUM_ITER 4622

#include <header.h>


int main_bench()
{
	int n, i, j, k;
	char **map;
	
	my_scanf("%d", &n);
	map = (char**)malloc(n*sizeof(char*));
	for(i=0; i<n; i++)
		map[i] = (char*)malloc(n*sizeof(char));
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			if(i==j)
				map[i][j] = 1;
			else
				map[i][j] = 0;
		}
	while(my_scanf("%d %d", &i, &j) && i+j!=0)
		map[i][j] = 1;
	
	k = 0;
	for(j=1; j<n; j++)
	{
		if(map[k][j] == 1)
			k = j;
	}
	for(i=0; i<k; i++)
	{
		if(map[i][k]==0 || map[k][i]==1)
		{
			my_printf("NOT FOUND");
			for(i=0; i<n; i++)
				free(map[i]);
			free(map);
			return 0;
		}
	}
	my_printf("%d", k);
	for(i=0; i<n; i++)
		free(map[i]);
	free(map);
	return 0;
}