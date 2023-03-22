#define NUM_ITER 54496

#include <header.h>


int main_bench()
{	double a,b,c,d;
    int i,n,u,v,y,z;
    int nl[1000];
	u=0;
	v=0;
    y=0;
	z=0;
	my_scanf("%d\n",&n);
    for(i=1;i<=n;i++){
    my_scanf("%d",&(nl[i]));
	    if(0<(nl[i])&&(nl[i])<19){
		    u+=1;
		}else if((nl[i])>18&&(nl[i])<36){
		    v+=1;
		}else if((nl[i])>35&&(nl[i])<61){
		    y+=1;
		}else if((nl[i])>60){
		    z+=1;
		}
    }
	a=1.0*u/n*100.0;
	b=1.0*v/n*100.0;
	c=1.0*y/n*100.0;
	d=1.0*z/n*100.0;

	my_printf("1-18: %.2lf%\n",a);
    my_printf("19-35: %.2lf%\n",b);
	my_printf("36-60: %.2lf%\n",c);
	my_printf("60??: %.2lf%\n",d);	
	return 0;
}