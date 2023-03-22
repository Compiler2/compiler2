#define NUM_ITER 70298

#include <header.h>

int hui(int p,int a);
int su(int q);
int main_bench()
{
	int m,n,i,flag=0,blag=0,k=0,array[1000];
	for(i=0;i<1000;i++)
		array[i]=0;
	my_scanf("%d %d",&m,&n);
     for(i=m;i<=n;i++)  
	 {
		 if(hui(i,i))
		 {
			 flag=1;
			 if(su(i))
			 {
				 blag=1;
				 array[k]=i;
				 k++;
			 }
		 }
	 }   
		 if(blag==1)
		 {
			 for(i=0;i<k-1;i++)
				 my_printf("%d,",array[i]);
			 my_printf("%d",array[k-1]);
		 }
		 else
			 my_printf("no");


}
int hui(int p,int a)
{
	int r,fan=0;
	do
	{
		r=p%10;
		fan=fan*10+r;
		p=p/10;
	}while(p!=0);
	
	if(fan==a)
		return(1);
	else
		return(0);
}
int su(int q)
{
	int r,chu=2;
	while(chu<q)
	{
		r=q%chu;
		if(r==0)
			break;
		else
			chu++;
	}
	if(chu==q)
		return(1);
	else
		return(0);
}
