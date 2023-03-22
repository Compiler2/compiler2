#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,sz[10000],i=0,j;
	my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	sz[i]=(d+12-a)*3600+e*60+f-b*60-c;
	while(a!=0){
        my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		i++;
		sz[i]=(d+12-a)*3600+e*60+f-b*60-c;
	}
	for(j=0;j<i;j++){
		my_printf("%d\n",sz[j]);
	}
return 0;
}