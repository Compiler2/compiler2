#define NUM_ITER 21410

#include <header.h>

int main_bench()
{
	int i=0, j=0, m=0, n=0;
        double t=0,x=0,y=0,a=0,b=0,e=0,d=0;
        my_scanf("%d", &n);
        my_scanf("%d%d", &d,&e); 
        x=e/d;
        for(i=0;i<n-1;i++){
             my_scanf("%d%d", &a,&b);
             y=b/a;
             if(x-y>0.05){
                  my_printf("worse\n");}
             if(x-y<0.05&&y-x<0.05){
                  my_printf("same\n");}
             if(y-x>0.05){
                  my_printf("better\n");}
        }
	return 0;
}
