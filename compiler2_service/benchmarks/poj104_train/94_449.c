#include <header.h>

int main_bench()
{   int b,a[500],i=0,c=0,d[500],e,f=0;
    my_scanf("%d",&b);
    for(i=0;i<b;i++){
	   my_scanf("%d",&a[i]);
	}

	for(i=0;i<b;i++){
		if(a[i]%2!=0){
			d[c]=a[i];
			c++;
		}
	}
    for(f=c;f>1;f--){
		for(i=0;i<f-1;i++){
			if(d[i]>d[i+1]){
				e=d[i+1];
				d[i+1]=d[i];
				d[i]=e;
			}
		}
	    
	}
	for(i=0;i<c;i++){
		if(i==c-1){my_printf("%d",d[i]);}else{
			my_printf("%d,",d[i]);}
	}	
	return 0;
}

