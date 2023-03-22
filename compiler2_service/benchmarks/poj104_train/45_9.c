#define NUM_ITER 1045185

#include <header.h>

int main_bench()
{
	char s[50],w[50];
	my_scanf("%s%s",s,w);
	int i,j=0,count=-1,l,m;
	l=strlen(w);
	m=strlen(s);
	for(i=count+1;i<l;i++)
	{
		if(w[i]==s[0])
		{
			count=i;
			while(w[i]==s[j]&&w[i]!='\0')
			{
				j++;
				i++;
			
			}
			if(j==m)
			{
				break;
			}
		}
	}
	if(j==m)
	{
		my_printf("%d",count);
	}
	else my_printf("error");




	return 0;
}

