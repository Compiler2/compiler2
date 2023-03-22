#define NUM_ITER 12151

#include <header.h>

int main_bench()
{
	int a=0,b,v,d,n,max,nn,mm=0,ii,c,e,f,i,j,t[100];
	char cc;
	my_scanf("%d",&nn);
	my_scanf("%c",&cc);
	for(ii=1;ii<=nn;ii++){
		int y[1000]={0};
char x[1000];
	gets(x);
	e=strlen(x);
		for(i=0;i<=e-1;i++){
			for(j=0;j<=e-1;j++){
				if(x[i]==x[j])y[i]++;}
			if(y[i]==1){my_printf("%c\n",x[i]);
			break;
			}
		}
		if(i==e)my_printf("no\n");
	
	}	
}