#include <header.h>

int main_bench()
{  
    int a,b,c,d,e,n,len;
	my_scanf("%d",&n);
    a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	d=(n-a*10000-b*1000-c*100)/10;
    e=(n-a*10000-b*1000-c*100-d*10)/1;
	if(a!=0)
		len=5;
	else if(a==0&&b!=0)
		len=4;
	else if(a==0&&b==0&&c!=0)
		len=3;	
	else if(a==0&&b==0&&c==0&&d!=0)
		len=2;
	else len=1;
    switch(len){
	case 1:my_printf("%d",n);break;
	case 2:my_printf("%d%d",e,d);break;
	case 3:my_printf("%d%d%d",e,d,c);break;	
	case 4:my_printf("%d%d%d%d",e,d,c,b);break;
	case 5:my_printf("%d%d%d%d%d",e,d,c,b,a);break;
	}
    return 0;
}

