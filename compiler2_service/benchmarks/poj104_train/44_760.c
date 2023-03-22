#include <header.h>

void reverse(int n)
{
 int i,b=0;
 if(n==0)
  my_printf("%d\n",n);
 else
 {
	 if(n<0)
	 my_printf("-");
	 n=abs(n);
	 if(n%10==0)
	 {
		 while(n%10==0)
		 {
			 n=n/10;
		 }
	 }
	 for(i=1;n!=0;i++)
	 {
		 b=b*10+n%10;
		 n=n/10;
	 }
	 my_printf("%d\n",b);
 }
}
int main_bench()
{
	void reverse(int num);
	int n,j;
	for(j=1;j<=6;j++)
	{
		my_scanf("%d",&n);
		reverse(n);
	}
	return 0;
}