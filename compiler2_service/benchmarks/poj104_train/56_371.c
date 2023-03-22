#include <header.h>


int main_bench()
{
	int k=0,i,t;
	char num[6],rum[6];
	my_scanf("%s",num);
	for (i=0;num[i]!='\0';i++)
	{
      k=k+1;	
	}
    for (i=0;num[i]!='\0';i++)
	{
		t=k-i-1;
		rum[t]=num[i];
	}
	rum[k]='\0';

	
	
		my_printf("%s\n",rum);

	return 0;
}