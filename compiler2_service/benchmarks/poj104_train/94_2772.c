#include <header.h>

int main_bench(){
	int N,i,e,h,j,k,m;
	h=0;
	my_scanf("%d",&N);
	int sz[501],js[501];
	for(i=0;i<N;i++)
	{
		my_scanf("%d",&sz[i]);
		if(sz[i]%2==1)
		{
			js[h]=sz[i];
			h++;
		};
	}

    for(e=1;e<=h;e++)
	{
        for(m=0;m<h-1;m++)
		{
			if(js[m]>js[m+1]){
				j=js[m+1];
				js[m+1]=js[m];
				js[m]=j;
			};
		};
	};
	for(k=0;k<h-1;k++){
		my_printf("%d,",js[k]);
	};
	my_printf("%d",js[k]);
	return 0;
}
