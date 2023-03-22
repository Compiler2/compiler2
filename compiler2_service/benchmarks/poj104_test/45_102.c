#define NUM_ITER 1075990

#include <header.h>

int main_bench()
{
	char s[50];
	char w[50];
	my_scanf("%s %s",&s,&w);
	int t1,t2;
	t1=strlen(s);
	t2=strlen(w);
	int i,j,n;
	i=t1-1;
	for(j=0;j<t2;j++)
		{
			if(s[0]==w[j]&&s[i]==w[j+i])
			{
				n=j;
				break;
			}
		}
	my_printf("%d",n);
}
