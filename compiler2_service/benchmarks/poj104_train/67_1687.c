#define NUM_ITER 27524

#include <header.h>

int main_bench() {
	int n,i,j;
	double p;
	int a[100][2];
	double s[100];
	my_scanf ("%d",&n);
	for (i=0;i<n;i++){
		for (j=0;j<2;j++){
			my_scanf ("%d",&a[i][j]);
		}
	}
    for (i=0;i<n;i++){
		s[i]=a[i][1]*1.0/a[i][0];
		p=s[0];
	}
	for (i=1;i<n;i++){
		if (s[i]-p>0.05){
			my_printf ("better\n");
		}if (p-s[i]>0.05){
			my_printf ("worse\n");
		}if (s[i]-p<=0.05&&p-s[i]<=0.05){
			my_printf ("same\n");
		}
	}
	return 0;
}