#define NUM_ITER 55732

#include <header.h>

int main_bench()
{
	int n,i;
	int sz[100];
	int a=0,b=0,c=0,d=0;
	
	my_scanf("%d",&n);


	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		if(sz[i]<=18){
			a++;
		}
        if(sz[i]>=19&&sz[i]<=35){
			b++;
		}
        if(sz[i]>=36&&sz[i]<=60){
			c++;
		}

        if(sz[i]>=61){
			d++;
		}
	}
double a1,b1,c1,d1;
          a1=(double)100*a/(a+b+c+d);
		  b1=(double)100*b/(a+b+c+d);
          c1=(double)100*c/(a+b+c+d);
          d1=(double)100*d/(a+b+c+d);




			
my_printf("1-18: %.2lf%%\n",a1);
my_printf("19-35: %.2lf%%\n",b1);
my_printf("36-60: %.2lf%%\n",c1);
my_printf("60??: %.2lf%%\n",d1);
return 0;

}