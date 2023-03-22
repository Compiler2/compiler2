#define NUM_ITER 237054

#include <header.h>

int main_bench()
{
	char a[300],i;
	int k,x,n,y=0;
	my_scanf("%s",a);
    n=strlen(a);
	for(i='A';i<='Z';i++){
		k=0;
		for(x=0;x<n;x++){
	    	if(a[x]==i)
				k++;
		}
		if(k!=0){
			my_printf("%c=%d\n",i,k);
			y=1;
		}
	}
    for(i='a';i<='z';i++){
		k=0;
		for(x=0;x<n;x++)
	    	if(a[x]==i){
				k++;
		}
			if(k!=0){
			my_printf("%c=%d\n",i,k);
			y=1;}
	}
	if(y==0)
		my_printf("No");
	return 0;
}
