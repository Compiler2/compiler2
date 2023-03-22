#include <header.h>

int main_bench(){
 int i=0,j=0,a[50000],b[50000],e,f,n,t=1;
    
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    my_scanf("%d%d",&a[i],&b[i]);
    }
    for(j=1;j<=n;j++)
    	{ for(i=0;i<n-j;i++){
    	if(a[i]>a[i+1])
    {   e=a[i+1];
    	a[i+1]=a[i];
    	a[i]=e;
    	f=b[i+1];
    	b[i+1]=b[i];
    	b[i]=f;	
    }	
    }
    	}
    for(i=0;i<n-1;i++)
    {	if(b[i]>=a[i+1]) 
    	{a[i+1]=a[0];
    		if(b[i]>b[i+1])
 b[i+1]=b[i];
    	}
    	else {
    		my_printf("no");
    		t=0;
    	}
    }
    if(t==1) my_printf("%d %d",a[0],b[n-1]);
    return 0;
}
