#define NUM_ITER 856713

#include <header.h>

int main_bench(){
	char zf[266];
	char a[266];
	char b[266];
	int i,k,j=0,c=0,d=0,p=0,mark=0;
	my_scanf("%s",zf);
	c=strlen(zf);
	my_scanf("%s",a);
	d=strlen(a);
	my_scanf("%s",b);
	for(i=0;i<c;i++){
		if(zf[i]==a[0]){
			for(k=0;k<d;k++){
				if(zf[i+k]==a[k]){
					j++;
					if(j==d){
						p=i;
						mark=1;
					}
				}
			}
		}
	}if(mark==1){
		for(i=0;i<p;i++){
			my_printf("%c",zf[i]);
		}my_printf("%s",b);
		for(i=p+d;i<c;i++){
			my_printf("%c",zf[i]);
		}
	}if(mark==0)
		my_printf("%s",zf);
	return 0;
}


                            