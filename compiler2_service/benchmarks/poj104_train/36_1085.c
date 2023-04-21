#define NUM_ITER 942788

#include <header.h>

int main_bench()
{
	char s[100],w[100];
	int n,m,i,j,count=0;
	my_scanf("%s%s",s,w);
	n=strlen(w);
	m=strlen(s);
	if(n!=m){
		my_printf("NO");
		return 0;
	}
	else{
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(s[i]==w[j]){
					count++;
					w[j]=' ';
					break;}
			}
		}
		if(count==n)
			my_printf("YES");
		else my_printf("NO");
		return 0;
	}
}