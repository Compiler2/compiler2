#include <header.h>

int main_bench(){
int i,n,a[50000],b[50000],m[20000],x,y,k;
my_scanf("%d",&n);
for(i=0;i<20000;i++)m[i]=0;
for(i=0;i<n;i++){	

	my_scanf("%d%d",&a[i],&b[i]);
	for(k=2*a[i];k<2*b[i];k++)m[k]=1;
	if(i==0){x=a[i];y=b[i];}
	else{
    	if(b[i]>y)y=b[i];
	    if(a[i]<x)x=a[i];
	}
}
for(k=2*x;k<2*y;k++){if(m[k]==0) {my_printf("no");break;}
                     if(k==2*y-1)my_printf("%d %d",x,y);
}
 return 0;
}