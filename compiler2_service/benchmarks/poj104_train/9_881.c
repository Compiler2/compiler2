#define NUM_ITER 2564

#include <header.h>

int main_bench()
{
	int n,sz[100];
	my_scanf("%d",&n);
    char zf[100][10],id[10];
	int i,k,e=0;
	for(i=0;i<n;i++){
		my_scanf("%s %d",zf[i],&(sz[i]));
	}
    for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(sz[i+1]>=60&&sz[i+1]>sz[i]){
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
				strcpy(id,zf[i]);
				strcpy(zf[i],zf[i+1]);
				strcpy(zf[i+1],id);
			}
		}
	}
    for(i=0;i<n;i++){
		my_printf("%s\n",zf[i]);
	}
    return 0;
}
