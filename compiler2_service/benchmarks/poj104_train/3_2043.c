#include <header.h>

int main_bench()
{
	int n,sz[1000],k,x,i,s;
     my_scanf("%d",&n);
	 my_scanf("%d",&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
 
    for(x=0;x<n;x++){
		for(i=0;i<n;i++){
			s=sz[x]+sz[i];
			if(s==k){
				my_printf("yes");
			break;}
	}
		if(s==k){
			break;}
	}
	if(s!=k){
		my_printf("no");}
	

	return 0;
	}
