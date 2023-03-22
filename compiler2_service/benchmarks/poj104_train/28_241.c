#define NUM_ITER 419431

#include <header.h>


int main_bench()
{   char c;
    int check=0,i=0,m,flag=0;
	while((c=getchar())!='\n'){
		
		if(c!=' ') {i++;flag=1;m=i;}
		else  if(flag==1) { flag=0;
			if(check==0)
		   {my_printf("%d",i);check=1;}
	       else my_printf(",%d",i);
	       i=0;
	   }
    
	 }
   if(flag==1&&check==1)
	my_printf(",%d",m);
 
	
	
	if(flag==1&&check==0)
		my_printf("%d",m);
  

	return 0;

}