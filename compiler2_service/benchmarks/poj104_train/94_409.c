#define NUM_ITER 13900

#include <header.h>

int main_bench(){
	int i,z,n,s[100],k[100],m,e,a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&s[i]);
	}
	z=0;
	for(i=0;i<n;i++){
		if(s[i]%2==1){
			k[z]=s[i];
			z++;
		}
	}
for(a=1;a<=z;a++){
	m=0;
	for(i=0;i<=z-a;i++){
		if(k[i]>k[m]){
			m=i;
		}
		if(m!=z-a){
			e=k[m];
			k[m]=k[z-a];
			k[z-a]=e;
		}
	}
	}
	if(z==1){
		my_printf("%d",k[0]);
	}else{my_printf("%d",k[0]);
		for(i=1;i<z;i++){
			
				my_printf(",%d",k[i]);
							}
	}
return 0;
}