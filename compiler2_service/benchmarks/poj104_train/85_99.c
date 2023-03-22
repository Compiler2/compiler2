#include <header.h>


int main_bench(){
	int n,i,j,l=0,s;
	char a[30];
	int b[100];
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%s",a);
		l=strlen(a);
		if ((a[0]=='_')||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')){
			s=0;
			for (j=1;j<l;j++){
				if ((a[j]=='_')||(a[j]>='0'&&a[j]<='9')||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')){
					s=s+0;
				}
				else{
					s=s+1;
				}
			}
		}
		else {
			s=1;
		}
		b[i]=s;
	}
	for (i=0;i<n;i++){
		if (b[i]==0){
			my_printf("yes\n");
		}
		else {
			my_printf("no\n");
		}
	}
	return 0;
}
