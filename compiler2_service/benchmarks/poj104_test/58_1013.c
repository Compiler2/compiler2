#define NUM_ITER 11667

#include <header.h>

int main_bench()
{
	int n,l,j,i,flag=0;
	my_scanf("%d",&n);
	getchar();
	char **p;
	p=(char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++)
	{
		*(p+i)=(char*)malloc(80*sizeof(char));
		gets(*(p+i));
	}
	for(i=0;i<n;i++)
	{
		l=strlen(*(p+i));	
		if(*(*(p+i))=='_'||(*(*(p+i))>='a'&&*(*(p+i))<='z')||(*(*(p+i))>='A'&&*(*(p+i))<='Z'))
		{
	      for(j=0;j<l;j++)
		  {
				if(*(*(p+i)+j)=='_'||(*(*(p+i)+j)>='a'&&*(*(p+i)+j)<='z')||(*(*(p+i)+j)>='A'&&*(*(p+i)+j)<='Z')||(*(*(p+i)+j)>='0'&&*(*(p+i)+j)<='9'))
				{
					flag=0;
				}
				else
				{
					flag=1;
					break;
				}
		  }
		}
		else
		{
			flag=1;
		}
		if(flag==0)
		{
			my_printf("%d\n",1);
		}
		else
			my_printf("%d\n",0);
	}
	return 0;
}