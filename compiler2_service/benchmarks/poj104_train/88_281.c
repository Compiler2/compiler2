#define NUM_ITER 462685

#include <header.h>


int main_bench()
{
	int i,j=0;
	char sz[30];
	gets(sz);  

	for(i=0;i<30;i++)
	{
		if((sz[i]=='0')||(sz[i]=='1')||(sz[i]=='2')||(sz[i]=='3')||(sz[i]=='4')||(sz[i]=='5')||(sz[i]=='6')||(sz[i]=='7')||(sz[i]=='8')||(sz[i]=='9'))
		{
			my_printf("%c",sz[i]);
			j=0; 
		}
		else
		{
			j++;
			if(j==1)
			{
				my_printf("\n");
			}  
		}
	}

	return 0;
}
