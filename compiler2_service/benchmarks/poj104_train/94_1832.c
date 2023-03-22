#define NUM_ITER 13365

#include <header.h>

int main_bench(){
    int a,b,n,c,d,e,f,g,sz[500],Sz[250];
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	g=1;
	my_scanf("%d",&n);
	for(b=0;b<n;b++){
		my_scanf("%d",&sz[b]);
	}
	for(a=0;a<n;a++){
		
			if(sz[a]%2!=0){
				
			Sz[c]=sz[a];

			c++;
			}
		
	}
	for(d=0;d<c;d++){
		for(e=0;e<c;e++){
			if(Sz[e]>Sz[e+1]){
                  f=Sz[e];
				  Sz[e]=Sz[e+1];
				  Sz[e+1]=f;
			}
		}
	}
	for(g=1;g<c;g++){
		my_printf("%d,",Sz[g]);
	}
	my_printf("%d",Sz[c]);
	return 0;
}
