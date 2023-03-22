#define NUM_ITER 2810

#include <header.h>

int main_bench()
{
	struct{
		char t[20],a[2],b[2];
		int m,n,p,g;
	}k[100],q;
	int c,i,j,sum=0;
	my_scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		k[i].g=0;
		my_scanf("%s%d%d%s%s%d",k[i].t,&k[i].m,&k[i].n,k[i].a,k[i].b,&k[i].p);
		if(k[i].m>80&&k[i].p>=1)
			k[i].g+=8000;
		if(k[i].m>85&&k[i].n>80)
			k[i].g+=4000;
        if(k[i].m>90)
			k[i].g+=2000;
        if(k[i].m>85&&k[i].b[0]=='Y')
			k[i].g+=1000;
        if(k[i].n>80&&k[i].a[0]=='Y')
			k[i].g+=850;
	}
	for(i=0;i<c;i++)
	{
		sum+=k[i].g;
	}
	for(i=0;i<c;i++)
	{
		for(j=c-1;j>i;j--)
		{
			if(k[j].g>k[j-1].g)
			{
				q=k[j];
				k[j]=k[j-1];
				k[j-1]=q;
			}
		}
	}
	my_printf("%s\n%d\n%d",k[0].t,k[0].g,sum);
	return 0;
}
