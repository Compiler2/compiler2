#define NUM_ITER 664

#include <header.h>

int main_bench()
{
	int n, i, j,judge[1000]={0};
	my_scanf("%d", &n);
	char a=0,b=0;
	getchar();
	for(i=1;i<=n;i++)
	{   
		judge[i]=1;
		my_scanf("%c", &a);
        if((a>=65 && a<=90) || (a>=97 && a<=122) || a=='_') judge[i]=judge[i]*1;
		else judge[i]=judge[i]*0;
		for(j=0;j<90;j++)
		{
			my_scanf("%c", &b);
			if(b=='\n') break;
			if(b=='_' || (b>=48 && b<=57) || (b>=65 && b<=90) || (b>=97 && b<=122)) judge[i]=judge[i]*1;
			else judge[i]=judge[i]*0;
		}
	}
	for(i=1;i<=n;i++)
	{  
		my_printf("%d\n", judge[i]);
	}
	return 0;
}
