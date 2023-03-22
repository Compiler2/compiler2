#include <header.h>

int main_bench(){
	int n,m,i,j,a[2000];
	char b[21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",b);
		m=strlen(b);
		for(j=0;j<m;j++){
			if(j==0&&((b[j]>=65&&b[j]<=90)||(b[j]>=97&&b[j]<=122)||b[j]=='_'))
				a[i]=1;
			else if(j!=0&&((b[j]>=65&&b[j]<=90)||(b[j]>=97&&b[j]<=122)||(b[j]>=48&&b[j]<=57)||b[j]=='_'))
				a[i]=1;
			else{
				a[i]=0;
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i])
			my_printf("yes\n");
		else
			my_printf("no\n");
	}
	return 0;
}