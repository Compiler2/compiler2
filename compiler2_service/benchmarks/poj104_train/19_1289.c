#define NUM_ITER 938018

#include <header.h>

int main_bench(){
	char s[110],a[110],b[110];
	gets(s);
	my_scanf("%s%s",a,b);
	int n=strlen(s);
	int na=strlen(a);
	int i,j,ans[30],c=0;
	for(i=0;i<n;i++){
		if(s[i]==' '||i==0){
			int count=0,q;
			if(i==0)
				q=0;
			else
				q=i+1;
			for(j=q;j<=q+na-1;j++){
				if(s[j]!=a[j-q])
					break;
				count++;
			}
			if(count==na){
				ans[c]=q;
				c++;
			}
		}
	}

	if(c==0)
		my_printf("%s",s);
	else{
		int p=0;
		for(i=0;i<=c-1;i++){
			for(j=p;j<ans[i];j++){
				my_printf("%c",s[j]);
			}
			my_printf("%s",b);
			p=ans[i]+na;
		}
		for(j=p;j<n;j++){
			my_printf("%c",s[j]);
		}
	}
}
