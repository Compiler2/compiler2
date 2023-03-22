#include <header.h>

int main_bench(){
	int n,i,j,k,l,f[10000],count,t;
	char s[10000];
	my_scanf("%d\n",&n);
	my_scanf("%s",s);
	l=strlen(s);
	for(i=0;i<=l;i++){
		f[i]=1;
		for(j=i+1;j<=l;j++){
			count=1;
			for(k=0;k<n;k++){
				if(s[i+k]!=s[j+k]){
					count=0;break;
				}
			}
			if(count)++f[i];
		}
	}
	count=0;t=0;
	for(i=0;i<=l-2*n;i++){
		if(f[i]>count)count=f[i];
	}
	if(count==1){
		my_printf("NO");
		return 0;
	}
	my_printf("%d\n",count);
	for(i=0;i<l-2*n;i++){
		if(f[i]==count){
			for(k=0;k<n;k++){
				my_printf("%c",s[i+k]);
			}
			my_printf("\n");
		}
	}




	my_scanf("%d",&i);
	return 0;
}