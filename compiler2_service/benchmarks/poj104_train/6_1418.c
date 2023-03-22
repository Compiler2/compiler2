#define NUM_ITER 30

#include <header.h>

int main_bench(){
	int k,m,n,a,b,c,d;
	c=0;
	my_scanf("%d",&k);
	int sz[100][100];
	int yi[100];
	int er[100];
	for(c=0;c<k;c++){
        my_scanf("%d%d",&m,&n);
	for(a=0;a<m;a++){
		for(b=0;b<n;b++){
			my_scanf("%d",&sz[a][b]);
		}
	}
        d=0;
		for(b=0;b<n;b++){
			d+=sz[0][b];
		}
		yi[a]=d;
		d=0;
	    for(b=0;b<n;b++){
			d+=sz[m-1][b];
		}
		er[a]=d;
	    d=yi[a]+er[a];
		for(b=1;b<=(m-2);b++){
	        d+=sz[b][0];
		}
		for(b=1;b<=(m-2);b++){
            d+=sz[b][n-1];
		}

		my_printf("%d\n",d);
		
	}
	return 0;
}
