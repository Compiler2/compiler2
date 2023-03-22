#include <header.h>






int main_bench()
{
	int i,z,s;
	for(i=70;i>=30;i-=10)
	{
	   for(z=20;z<=30;z+=10)
	   {
	     for(s=10;s<z&&s<=20;s+=10)
		 {
		   if(z*2+s<i&&i-s<60)
		   {
my_printf("l %d\n",i-s);
my_printf("q %d\n",i-z);		    
my_printf("z %d\n",z);
my_printf("s %d\n",s);	 

			 			
 
		   }
		 }
	   }
	}
	return 0;
}