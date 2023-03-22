#define NUM_ITER 4928

#include <header.h>

int main_bench(){
	int n,z[50000][2],x,y,i,j,q,w;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&z[i][0],&z[i][1]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(z[i][0]>z[j][0])
			{
				q=z[i][0];
                w=z[i][1];
				z[i][0]=z[j][0];
				z[i][1]=z[j][1];
				z[j][0]=q;
				z[j][1]=w;
			}
		}
	}
	q=z[0][1];
	for(i=1;i<n;i++)
	{
		if(q<z[i][1])
		{
			q=z[i][1];		
		}
	}
	x=z[0][0];
	y=z[0][1];
    for(i=1;i<n;i++)
	{
		if(z[i][0]<=y&&z[i][1]>=y)
		{
			y=z[i][1];
		    
		}
		
	}
	if(y==q)
	
		my_printf("%d %d",x,y);
	else
		my_printf("no");
	return 0;

}

