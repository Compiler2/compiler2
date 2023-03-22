#include <header.h>

int main_bench(){
	int n,a=0,b=0,c=0,d=0;
	int i;
    int sz[10000];
	my_scanf("%d",&n);
    for(i=0;i<=(n-1);i++){
		my_scanf("%d", &(sz[i]));
		if(sz[i]>0&&sz[i]<=18){
			a++;
		}else if(sz[i]>=19&&sz[i]<=35){
			b++;
		}else if(sz[i]>=36&&sz[i]<=60){
			c++;
		}else if(sz[i]>=61){
			d++;
		}
	}
	my_printf("1-18: %.2lf%%\n",1.0*a/n*100);
    my_printf("19-35: %.2lf%%\n",1.0*b/n*100);
	my_printf("36-60: %.2lf%%\n",1.0*c/n*100);
	my_printf("60??: %.2lf%%\n",1.0*d/n*100);
	return 0;
}