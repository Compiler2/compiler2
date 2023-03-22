#include <header.h>


int main_bench()
{  int a[100],n,m=0,s=0,l=0,o=0,i,e;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
      my_scanf("%d",&a[i]);
   }
for(i=0,m=0,s=0,l=0,o=0;i<n;i++){
     if(a[i]<=18){
        
        m+=1;
	 }else if(a[i]<=35){
	    s+=1;
	 

	 
	 }else if(a[i]<=60){
	    l+=1;
	 
	 
	 }else if(a[i]>60){
	    o+=1;
	 
	 
	 }
}

	my_printf("1-18: %.2lf%%\n",((double)m)/n*100);
	my_printf("19-35: %.2lf%%\n",((double)s)/n*100);
	my_printf("36-60: %.2lf%%\n",((double)l)/n*100);
	my_printf("60??: %.2lf%%\n",((double)o)/n*100);
	return 0;
}

