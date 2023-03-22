#define NUM_ITER 6353

#include <header.h>

int main_bench()
{
	int y[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	int n,i,j,temp,year[200],mon1[200],mon2[200],total;
	  my_scanf("%d",&n);
	    for(i=0;i<n;i++)
		{
		   my_scanf("%d %d %d",&year[i],&mon1[i],&mon2[i]);
		}
		  for(i=0;i<n;i++)
		  {
		     if((year[i]%4==0&&year[i]%100!=0)||(year[i]%4==0&&year[i]%400==0))
                      j=1;
			 else
				      j=0;
			    if(mon1[i]>mon2[i])
				{
				           temp=mon1[i];
						   mon1[i]=mon2[i];
						   mon2[i]=temp;
				}
                       for(total=0;mon1[i]<mon2[i];mon1[i]++)
					   {
					      total+=y[j][mon1[i]-1];
					   }
					      if(total%7==0)
							  my_printf("YES\n");
						  else
							  my_printf("NO\n");
                       
		}
	return 0;
}

