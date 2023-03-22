#include <header.h>

int main_bench()
{
	int i,j,e=0,k,l=0;
	char a[260]={'\0'},b[260]={'\0'},c[260]={'\0'};
	my_scanf("%s %s %s",b,a,c);
	for(i=0;i<strlen(b);i++){
		if(b[i]==a[0]){
			for(j=0;j<strlen(a);j++){
				if(b[i+j]!=a[j]){
					e=1;
				}
			}
			if(e==0){ k=i;l=1;break;}
			else e=0;
		}
	}

	if(l==1){
		for(i=0;i<k;i++){
			my_printf("%c",b[i]);
		}
		my_printf("%s",c);
		for(i=k+strlen(a);i<strlen(b);i++){
			my_printf("%c",b[i]);		
	}}
	else 
		my_printf("%s",b);
	return 0;
}

