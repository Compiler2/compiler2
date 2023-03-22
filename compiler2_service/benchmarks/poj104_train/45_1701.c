#define NUM_ITER 1025249

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	my_scanf("%s%s",a,b);
	int i,j,s;
	s=(int)strlen(b);
	for(i=0;i<s;i++)
	{
		if((b[i]==a[0])&&(b[i+1]==a[1])) 
		{
			my_printf("%d",i);
			break;
		}
	}
}

