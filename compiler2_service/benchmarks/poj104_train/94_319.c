#include <header.h>

int main_bench(){
	int sz[500],n,i,k,s,d,c,e;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
    for(k=1;k<=n;k++){
       for(i=0;i<n-k;i++){
		   if(sz[i]>sz[i+1]){
			   s=sz[i+1];
			   sz[i+1]=sz[i];
			   sz[i]=s;
		   }
	   }
	   }
    for(c=0;c<n;c++){
		d=sz[c]%2;
		if(d==1){
		my_printf("%d",sz[c]);
		}
		break;
	}
    for(e=c+1;e<n;e++){
		d=sz[e]%2;
		if(d==1){
		my_printf(",%d",sz[e]);
		}
	}
	return 0;
}
