#include <header.h>

int abc(int p,int *x){
	if(*x==0){ my_printf("60\n");return 0;}
	if(*x==1){
		if(p>57) my_printf("%d\n",p);
		else my_printf("57\n");
		return 0;
	}
	else if(p+3*(*x-1)>60){
		*x=*x-1;
		return 1;
	}
	else if(p+3*(*x-1)<=60){
		if(p>60-3*(*x)) my_printf("%d\n",p);
		else my_printf("%d\n",60-3*(*x));
		return 0;
	}
}

int main_bench()
{
	int i,k,n,d;
	my_scanf("%d",&k);
	for(i=0;i<k;i++){
		int *p,j;
		my_scanf("%d",&n);
		p=(int *)malloc(sizeof(int)*n);
		for(j=0;j<n;j++){
			my_scanf("%d",p+j);
		}
		d=abc(*(p+n-1),&n);
		while(d==1){
			d=abc(*(p+n-1),&n);
		}
	}
	return 0;
}