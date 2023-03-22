#define NUM_ITER 930982

#include <header.h>

int main_bench()
{
	int i,m=0,k=1;
	char a[501],b[501];
	double x,y;
	my_scanf("%lf",&x);
	my_scanf("%s",a);
	my_scanf("%s",b);
	if(strlen(a)!=strlen(b)){
		my_printf("error");
	}
	else
	{
		for(i=0;i<strlen(a);i++){
			if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')){
				my_printf("error");
				k=0;
				break;
			}
			else if(a[i]==b[i]){
				m++;
			}    	
		}
		if(k){
          	y=1.0*m/strlen(a);
            if(y>x){
	            my_printf("yes");
            }else if(y<x||y==x){
               	my_printf("no");
            }
		}
	}
	return 0;
}