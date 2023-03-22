#define NUM_ITER 54127

#include <header.h>

int main_bench(){
int n,i;
my_scanf("%d",&n);
int b[n];
for(i=0;i<n;i++){
my_scanf("%d",&(b[i]));
}
double a,c,d,e,f,g,h,j;
a=0;
c=0;
d=0;
e=0;
for(i=0;i<n;i++){
	if(b[i]>0&&b[i]<=18){
		a++;
	}else if(b[i]>=19&&b[i]<=35){
		c++;
	}else if(b[i]>=36&&b[i]<=60){
		d++;
	}else if(b[i]>=61&&b[i]<=100){
		e++;
	}	
	}
f=100*a/n;
g=100*c/n;
h=100*d/n;
j=100*e/n;
my_printf("1-18: ");
my_printf("%.2lf",f);
my_printf("%%\n");
my_printf("19-35: ");
my_printf("%.2lf",g);
my_printf("%%\n");
my_printf("36-60: ");
my_printf("%.2lf",h);
my_printf("%%\n");
my_printf("Over60: ");
my_printf("%.2lf",j);
my_printf("%%");



return 0;

}