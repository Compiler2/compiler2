#define NUM_ITER 653

#include <header.h>

int num[1000][1000];
int main_bench(){
	int k,i,j;
	my_scanf("%d", &k);
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
		    my_scanf("%d", &num[i][j]);
		}
	}
	int m,n,p,q,s,w;
	w=0;
	for(i=0;i<k&&w==0;i++)
	{
		for(j=0;j<k&&w==0;j++)
		{
			if(num[i][j]==0)
			{
				m=i;
				p=j;
				w=1;
			}
		}
	}
	n=0;
	q=0;
	for(i=m,j=p;j<k;j++)
	{
		if(num[i][j]==0)
		{
			n++;
		}
	}
	for(i=m,j=p;i<k;i++)
	{
		if(num[i][j]==0)
		{
			q++;
		}
	}
	s=(n-2)*(q-2);
	my_printf("%d", s);
	return 0;
}
