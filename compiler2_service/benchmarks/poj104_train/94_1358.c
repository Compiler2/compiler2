#define NUM_ITER 18210

#include <header.h>

int main_bench()
{
	int u[1000],v[1000];
	int n,i,j,a=0,max,e,b,c,d;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&u[i]);
	}
	j=0;
	for(i=0;i<n;i++){
		if(u[i]%2!=0){
             v[j]=u[i];
			 j++;
			 a++;
		}
	}
	max=0;
	b=0;
         d=a;
	while(b<d){
	for(j=0;j<a;j++){
		if(v[j]>v[max]){
			max=j;
		}
	}
	if(max!=a-1){
		e=v[max];
		v[max]=v[a-1];
		v[a-1]=e;
	}
	a--;
	b++;
	max=0;
	}
	for(c=0;c<d;c++){
		if(c<d-1){
		my_printf("%d,",v[c]);
		}else if(c==d-1){
			my_printf("%d",v[c]);
		}
	}
	return 0;
}