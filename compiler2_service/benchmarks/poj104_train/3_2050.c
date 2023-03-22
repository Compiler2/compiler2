#include <header.h>


int main_bench(){
	int as[1000],n,k,c;
	my_scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&(as[i]));
	}
	int d=0;
	for(int j=0;j<n;j++)
	{
		for(int l=0;l<n;l++)
		{
            c=as[j]+as[l];
			if(c==k)
			{
				my_printf("yes");
				d++;
				break;
			}
		}
		if(c==k)
			break;
	}
	if(d==0)
		my_printf("no");
	return 0;
}
