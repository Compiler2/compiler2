#define NUM_ITER 87011

#include <header.h>

int main_bench(){ int m,i,j,k,c=0;my_scanf("%d",&m);
for(i=3;2*i<=m;i++){
	for(j=2;j*j<=i;j++)
	{if(i%j==0){c=1;break;}
	}for(j=2;j*j<=m-i;j++){if((m-i)%j==0){c=1;break;}}
    k=m-i;if(c==0)my_printf("%d %d\n",i,k);c=0;
}return 0;}