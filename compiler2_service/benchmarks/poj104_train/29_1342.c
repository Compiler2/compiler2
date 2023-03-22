#define NUM_ITER 4471

#include <header.h>

double add(int n);
int main_bench()
{
    int m;
    my_scanf("%d",&m);
    int *sz=(int*)malloc(sizeof(int)*m);
    int i;
    for(i=0;i<m;i++){
      my_scanf("%d",&sz[i]);
    }
    double a;    
    for(i=0;i<m;i++){
      a=add(sz[i]);
      my_printf("%.3lf\n",a);
    }
    return 0;
}
double add(int n){
	double b=2.0,a=1.0,c;
	double s=0;
	for( ;n>0;n--){
		s+=b/a;
		c=a;
	    a=b;  
        b=c+b;
	}
	return s;
}