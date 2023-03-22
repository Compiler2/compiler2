#include <header.h>

int main_bench() 
{
	int i,n,nl;
	int nld[4]={0,0,0,0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&nl);
		if(nl<=18)
			nld[0]++;
		   
		if(nl>18&&nl<36)
			nld[1]++;
		    
		if(nl>35&&nl<61)
			nld[2]++;
		   
		if(nl>60)
			nld[3]++;
		   
	}
    my_printf("1-18: %.2lf%%\n",(100.0*nld[0])/n);
	 my_printf("19-35: %.2lf%%\n",(100.0*nld[1])/n);
	  my_printf("36-60: %.2lf%%\n",(100.0*nld[2])/n);
	   my_printf("60??: %.2lf%%\n",(100.0*nld[3])/n);
	return 0;
}