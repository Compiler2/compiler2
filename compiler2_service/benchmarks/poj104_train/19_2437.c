#define NUM_ITER 800735

#include <header.h>

char w[100];
char m[200][200];           
char a[200],b[200];
int main_bench()
{
	gets(w);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int p=0,q=0,r;
	for(r=0;w[r]!='\0';r++)
	{
		if(w[r]==' ') 
		{
			p++;
			q=0;
		}
		else
		{
			m[p][q]=w[r];
			q++;       
		}
	}
	int i,x;
	for(i=0;i<p+1;i++)
	{
		if(strcmp(m[i],a)==0)
		{
			for(x=0;x<(strlen(b)+1);x++)
			{
				m[i][x]=b[x];
			}
		}
	}
	my_printf("%s",m[0]);
	for(i=1;i<p+1;i++)
	{
		my_printf(" %s",m[i]);
	}

	return 0;
}