#include <header.h>

int main_bench()
{
	int n,i=0,j=0,a,b,k=0;
	my_scanf("%d",&n);
		while(i<n)
		{   i++;
			my_scanf("%d %d",&a,&b);
			if(90<=a&&a<=140&&60<=b&&b<=90)
			{
				j++;
			}
			else
			{
				break;
			}
	     }
		while(i<n)
		{
	         while(i<n)
             {    i++;
			      my_scanf("%d %d",&a,&b);
			      if((90<=a)&&(a<=140)&&(60<=b)&&(b<=90))
			        {
				     k++;
			        }
			      else
			        {
				      break;
			        }
	         }
             if(k>j)
				      {
						  j=k;
					  }
				      k=0;
		}
my_printf("%d",j);
	return 0;
}