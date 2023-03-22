#include <header.h>


int main_bench()
{
    int l,i,j,n,max=0;
	char s[501];
	char x[501][5];
	int num[501]={0};

	my_scanf("%d",&n);
	my_scanf("%s",s);

    l=strlen(s);
	for(i=0;i<=l-n;i++)
	{
	    for(j=0;j<n;j++)
		{
		    *(*(x+i)+j)=*(s+i+j);

		}
		*(*(x+i)+j)='\0';
	}

	for(i=0;i<=l-n;i++)
	{
	    for(j=0;j<=l-n;j++)
		{
		    if(strcmp(*(x+i),*(x+j))==0)
				(*(num+i))++;
		}
	}

	for(i=0;i<=l-n;i++)
	{
        if(max<*(num+i))
			max=*(num+i);
	}


    if(max<=1)
	{
	    my_printf("NO\n");
	}
	else
	{
	for(i=0;i<=l-n;i++)
	{
	   
			for(j=0;j<i;j++)
			{
			     if(strcmp(*(x+i),*(x+j))==0)
					 *(num+i)=0;
			}
	}
	my_printf("%d\n",max);
	for(i=0;i<=l-n;i++)
	{
	      if(*(num+i)==max)
			 my_printf("%s\n",*(x+i));

	}
	}
	return 0;
} 