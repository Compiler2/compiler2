#include <header.h>


int main_bench()
{
	int n;
	int age[100];
    int a=0, b=0, c=0, d=0;
	double x, y, z, w;
	int i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&age[i]);
		if(age[i]<19){
			a += 1;
		}else if(18<age[i]&&age[i]<36){
			b += 1;
		}else if(35<age[i]&&age[i]<61){
			c += 1;
		}else if(60<age[i]){
			d += 1;
		}
	}
    x=(double)a/n*100;
	y=(double)b/n*100;
	z=(double)c/n*100;
	w=(double)d/n*100;
    my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",x,y,z,w);
	return 0;
	
}

