#define NUM_ITER 32585

#include <header.h>

int main_bench()
{
	int n,i,j=1;
	char w[500][100];
	int l[500],s[100];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",w[i]);
		l[i]=strlen(w[i]);
	}
	
	
	
	
	
	for(i=0;;i++)
	{
		my_printf("%s",w[j]);
		s[i]=l[j];
		j++;
		if(j==n+1)
			break;
		while(s[i]+l[j]+1<=80)
		{
			my_printf(" %s",w[j]);
			s[i]=s[i]+1+l[j];
			j++;
			if(j==n+1)
				break;
		}
		my_printf("\n");
		if(j==n+1)
			break;
	}
	return 0;
}