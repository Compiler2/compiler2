#include <header.h>

int main_bench()
{
	int a,b,c,i;
	my_scanf("%d",&a);
	if(a!=1){
	for(i=0;i<1000;i++){
	 if(a%2==0){
	    b=a/2;
	    my_printf("%d/2=%d\n",a,b);
	    a=b;
	 }
	 else{
	    c=a*3+1;
	    my_printf("%d*3+1=%d\n",a,c);
	    a=c;
	 }
	if(a==1)
		break;
	else
		continue;
	}
	    my_printf("End");
	}
	else
		my_printf("End");
	return 0;
}
