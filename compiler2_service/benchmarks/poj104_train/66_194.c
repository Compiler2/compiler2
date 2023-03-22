#include <header.h>

int main_bench()
{
	int a,b,c,n,x,t=0,i=0,j,o;
	char f[100],g[5];
	my_scanf("%s%d%d",f,&b,&c);
	o=strlen(f);
	if (o>6)
	{
	for(j=o-5;j<o;j++)
	{
		
		g[i]=f[j];
		i++;
	}
	a=atoi(g);
	
	}
	else
	{
		a=atoi(f);
	}
	a=a%400;
	x=a/100;
	for(i=1;i<b;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		{
			t=t+31;
		}
		else if (i==2)
		{
			t=t+28;
		}
		else
		{
			t=t+30;
		}
	}
	n=(a-1)*365+(a/4-x)+t+c-1;
	n=n%7;
	if(b<3)
		n=n-1;
	if(n<0)
		n=n+7;
	switch(n)
	{
	case 0 : my_printf("Mon.\n");break;
	case 1 : my_printf("Tue.\n");break;
	case 2 : my_printf("Wed.\n");break;
	case 3 : my_printf("Thu.\n");break;
	case 4 : my_printf("Fri.\n");break;
	case 5 : my_printf("Sat.\n");break;
	case 6 : my_printf("Sun.\n");break;
	}
	return 0;

}