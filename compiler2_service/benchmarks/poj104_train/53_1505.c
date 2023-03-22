#include <header.h>

int main_bench()
{
	int n,MEDIA=0;my_scanf("%d",&n);
	int NUMO[n];int k=0;
	for(int i=0;i<=n;i++)
	{
		my_scanf("%d",&MEDIA);
		for(int j=0;j<k;j++)
		{
			if(NUMO[j]==MEDIA) goto SPEEEE;
		}
		NUMO[k]=MEDIA;
		k++;
		SPEEEE: ;
	}
	for(int i=0;i<k-1;i++)
	my_printf("%d,",NUMO[i]);
	my_printf("%d",NUMO[k-1]);
}