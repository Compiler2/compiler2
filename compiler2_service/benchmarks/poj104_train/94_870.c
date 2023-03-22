#define NUM_ITER 5013

#include <header.h>


int main_bench(){
    int n,as[500],k[500];
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&(as[i]));
	}
	for(int j=0;j<n;j++)
	{
		for(int t=0;t<n-j;t++)
		{
			if(as[t]>as[t+1])
			{
				int e=as[t+1];
				as[t+1]=as[t];
				as[t]=e;
			}
		}
	}
	int y=0;
	for(int g=0;g<n;g++)
	{
		if(as[g]%2!=0)
		{
			k[y]=as[g];
			y++;
		}
	}
	for(int a=0;a<y;a++)
	{
		if(a!=y-1)
			my_printf("%d,",k[a]);
		else
			my_printf("%d",k[a]);
	}
	return 0;
}




