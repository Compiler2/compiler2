#define NUM_ITER 4404

#include <header.h>

int main_bench()
{
	int n,sza[50000],szb[50000],i,max;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&sza[i],&szb[i]);}
	int e,f,k,a=0,b;
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(sza[i]>sza[i+1]){
	e=sza[i+1];
	f=szb[i+1];
	sza[i+1]=sza[i];
	szb[i+1]=szb[i];
	sza[i]=e;
	szb[i]=f;
	}}}
	max=szb[0];
	for (i=1;i<n;i++)
        if (sza[i]<=max)
        {
            if (max<szb[i])
                max=szb[i];
        }else break;
    if (i<n)my_printf("no\n");
    else my_printf("%d %d\n",sza[0],max);
return 0;



}