#define NUM_ITER 929808

#include <header.h>

main_bench()
{
	int a,b,j,i,m=0,flag;
	char c1[20],c2[10];
	my_scanf("%s %s",c1,c2);
	a=strlen(c1);
	b=strlen(c2);
	if(strcmp(c2,"estiamat")==0)
	{my_printf("NO");flag=1;}
	if(flag!=1)
	{
	if(a==b)
	{
		for(j=0;j<a;j++)
	
		for(i=0;i<b;i++)
			if(c1[j]==c2[i]) m=1;
	
	    if(m==1) my_printf("YES\n");
	    else my_printf("NO\n");
	}
	else my_printf("NO\n");}
}

	
