#include <header.h>

int sushu(int x)
{
	int k=2,j=1,i;
	for(i=1;i<=x;i++)
	while((k<=x/2)&&j)
	{if(x%k==0)
	j=0;
	else
		k=k+1;}
	return j;
}
	 
int main_bench()
{
	int n,i,x,y,count=0;
    my_scanf("%d",&n);
	for(i=2;i<=n-2;i++)
    {
	  if(sushu(i)&&sushu(i+2))
	   my_printf("%d %d\n",i,i+2);
	}
	if(n<5)
		my_printf("empty");
  return 0;
}