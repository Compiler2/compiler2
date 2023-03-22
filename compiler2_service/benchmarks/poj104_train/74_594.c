#define NUM_ITER 671192

#include <header.h>


int main_bench()
{
    int m,n,i,j,k,l,t=1,p,a[200];
	char s1[20],s2[20];
	int amount=0;

	my_scanf("%d%d",&m,&n);

	for(i=m;i<=n;i++)
	{
        t=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0){
				t=0;
				break;}
		}

		int si;
		si=i;

		sprintf(s1,"%d",si);
		int len=strlen(s1);
		for(k=len-1,l=0;k>=0,l<len;k--,l++)
		{
			s2[l]=s1[k];
		}
		s2[len]='\0';

		if((t==1)&&(strcmp(s2,s1)==0))
		{
			amount++;
			a[amount-1]=i;
		}

	
	}

	if(amount==0)
	{
		my_printf("no");
	}
    else
	{
		my_printf("%d",a[0]);
	    for(p=1;p<amount;p++)
		{
	    	my_printf(",%d",a[p]);
		} 
	}

	my_printf("\n");

    return 0;
}

