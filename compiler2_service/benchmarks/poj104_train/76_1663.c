#define NUM_ITER 10780

#include <header.h>

int main_bench(){
	int n,i,j,max,min,p,q,s;
	s=0;
	my_scanf("%d",&n);
	int * a;
	int * b;
	int * c;
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&(a[i]),&b[i]);
	}
	max=b[0];min=a[0];
	for(i=1;i<n;i++){
		if(min>a[i]) min=a[i];
		if(max<b[i]) max=b[i];
	}
	q=max-min;
	c=(int*)malloc(sizeof(int)*q);
	for(i=0;i<q;i++){
		c[i]=1;
	}
	for(i=0;i<n;i++){
		for(j=a[i]-min;j<b[i]-min;j++){
			c[j]=0;
		}
	}
	for(i=0;i<q;i++){
		s+=c[i];
	}
	if(s>=1)
		my_printf("no");
	if(s==0)
		my_printf("%d %d",min,max);
	free(a);free(b);free(c);
	return 0;
}