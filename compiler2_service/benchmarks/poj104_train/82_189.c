#include <header.h>

int main_bench()
{ 
	struct a
	{
		int x,y;
	}as[100];
	int n,i,j,k,m;
	int b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++) my_scanf("%d%d",&as[i].x,&as[i].y);
	j=0;b[j]=0;
	for(i=0;i<n;i++)
	{
		if(((as[i].x>=90)&&(as[i].x<=140))&&((as[i].y>=60)&&(as[i].y<=90))) b[j]=b[j]+1;
		else { j=j+1;b[j]=0;}
	}
	k=j;
	for(j=0;j<=k;j++)
	{
		m=0;
		for(i=0;i<=k;i++)
		{
			if(b[j]<b[i]) m=1;
		}
		if(m==0){my_printf("%d",b[j]);break;}
	}
	return 0;
}