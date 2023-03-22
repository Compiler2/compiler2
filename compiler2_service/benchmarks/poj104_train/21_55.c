#include <header.h>

int main_bench(){
	int a[100],i,n;
	float ave,b[100],k=0,m=0,t=0;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{     
        my_scanf("%d",&a[i]);  
		m=m+a[i];
	}
	ave=(float)m/n;
	

	for(i=0;i<n;i++)
	{
		b[i]=fabs((float)(a[i]-ave));     
		if(b[i]>k)
		      k=b[i];
			 
	}
	    
    for(i=0;i<n;i++)
{		
		if(b[i]==k){
			t++;
			if(t==1)
			my_printf("%d",a[i]);
			else my_printf(",%d",a[i]);
	}
	}
	return 0;
}