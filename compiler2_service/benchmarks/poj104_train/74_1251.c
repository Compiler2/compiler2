#define NUM_ITER 204233

#include <header.h>








int isround(int num)
{
	int temp,mid;
	temp = 0;
  mid = num;
  while (mid != 0)
  {
   temp = temp*10 + mid%10;
   mid /= 10;
  }
	if(temp==num)return 1;
	else return 0;

}
 
int isprime(int n)
{
	int i;
	int count=0;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)count++;
	}
	if(count==0)return 1;
	else return 0;

}




int main_bench()
{
	int m,n;
	int i;
	int count=0;
	my_scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(isprime(i)==1&&isround(i)==1)
		{
			if(count==0)
				my_printf("%d",i);
			else 
				my_printf(",%d",i);
			count++;
		}
	}
     if(count==0)my_printf("no");

	return 0;
}

