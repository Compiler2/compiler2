#define NUM_ITER 1028121

#include <header.h>

main_bench()
{
	char str1[1000],str2[1000];
	int n,m,i,l;
	int com(char,char yy[],int);
	my_scanf("%s%s",str1,str2);
	m=strlen(str1);
	n=strlen(str2);
	if(m!=n)
		my_printf("NO");
	else
	{
		for(i=0,l=0;i<m;i++)
		{
			if(com(str1[i],str2,m)==1)
			{
				l=l+1;
				continue;
			}
			else
				break;
		}
		if(l<m)
			my_printf("NO");
		else
			my_printf("YES");
	}
}

int com(char x,char yy[],int y)
{
	int i,z=0;
	for(i=0;i<y;i++)
	{
		if(x==yy[i])
		{
			z=1;
			yy[i]='\0';
			break;
		}
	}
	return(z);
}