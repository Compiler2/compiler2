#define NUM_ITER 21440

#include <header.h>


int main_bench()

{
    int n, i,m=0, d;
	float j,j1,j2,q[100],q1[100],q2[100];
	my_scanf("%d",&n);
	my_scanf("%f %f",&j1,&j2);
	j=j2/j1;
	for(i=0;i<n-1;i++){
		my_scanf("%f %f",&q1[i],&q2[i]);
		q[i]=q2[i]/q1[i];
		if(q[i]-j>0.05)
			my_printf("better\n");
		else if(j-q[i]>0.05)
			my_printf("worse\n");
		else my_printf("same\n");
    
	}
   	return 0;
}
