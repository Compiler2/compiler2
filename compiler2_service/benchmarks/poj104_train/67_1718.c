#include <header.h>

int main_bench(){
	int n,i;
	double f;
	struct ZL{
		int a,b;
	}*s;
	my_scanf("%d",&n);
	s=(struct ZL*)malloc(sizeof(struct ZL)*n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&s[i].a,&s[i].b);
	}
	f=(double)s[0].b/s[0].a;
	for(i=1;i<n;i++){
		if((double)s[i].b/s[i].a-f>0.05){my_printf("better\n");}
		else if(f-(double)s[i].b/s[i].a>0.05){my_printf("worse\n");}
		else{my_printf("same\n");}
	}
	free(s);
	return 0;
}