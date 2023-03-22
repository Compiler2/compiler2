#define NUM_ITER 26327

#include <header.h>

int main_bench()
{
    int n,i;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		char m[20],n[20];
		memset(n,0,sizeof(n));
		int k,j;
		my_scanf("%s",m);
		k = strlen(m);
		if(m[k-3]=='i')
		{
			for(j=0;j<k-3;j++)
			{

				n[j]=m[j];
			}
			my_printf("%s\n",n);
		}
		else
			{
			for(j=0;j<k-2;j++)
			{
				n[j]=m[j];
			}
			my_printf("%s\n",n);
		}
	}
	return 0;
}



