#define NUM_ITER 201558

#include <header.h>

int main_bench()
{
	
	char str[2][80];
	int i,j;
	for(i=0;i<2;i++)
	{
		gets(str[i]);
		for(j=0;j<80;j++)
			if((str[i][j])>='a'&&(str[i][j])<='z')
			(str[i][j])=(str[i][j])-32;
		else (str[i][j])=(str[i][j]);
	}
	if(strcmp(str[0],str[1])>0)
		my_printf(">");
	else if(strcmp(str[0],str[1])<0)
		my_printf("<");
	else if(strcmp(str[0],str[1])==0)
		my_printf("=");
	
}

	