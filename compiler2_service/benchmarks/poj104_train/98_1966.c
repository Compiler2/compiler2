#define NUM_ITER 29862

#include <header.h>

int main_bench()
{
	int n,i,l[1000],t=0;
	char word[1000][41];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&word[i]);
		l[i]=(int)strlen(word[i]);
	}
	for(i=0;i<n-1;i++)
	{
		t+=l[i];
		if(t<80) 
		{
			my_printf("%s",word[i]);
			t+=1;
		}
		else if(t==80) 
		{
			my_printf("%s\n",word[i]);
			t=0;
		}
		else
		{
			my_printf("\n");
			t=0;
			i-=1;
		}
		if(t+l[i+1]<=80 && t!=0) my_printf(" ");
	}
	my_printf("%s",word[i]);
	return 0;
}



