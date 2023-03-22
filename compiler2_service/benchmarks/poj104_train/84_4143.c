#define NUM_ITER 62086

#include <header.h>

int main_bench()
{
int num,n;
int max,sec;

  my_scanf("%d",&n);
  for(int i=0 ;i<n;i++)
  {
	 my_scanf("%d",&num);

	 if(i==0)
	 {
		 max=num;
	 }
		 
	 else if(i!=0)
	 {

		 if(num>max)
		 {
			 sec=max;
			 max=num;
		 }
		 else if(num>sec && num<max)
		 {
			 sec=num;
		 }
	 }
		
	 
   
   
  }
	my_printf("%d\n%d\n",max,sec);
	return 0;
}
