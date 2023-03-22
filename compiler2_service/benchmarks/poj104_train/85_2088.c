#include <header.h>

int main_bench(){
	int n,i,c,j;
    char a[21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		c=0;
		for(j=0;j<strlen(a);j++){
			if(j==0){
				if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||(a[0]=='_')&&(a[0]<'0'||a[0]>'9')){
					c++;}
			}
			else{
				if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]=='_')||(a[j]>='0'&&a[j]<='9')){
						 c++;}
			}
		}
		if(c==strlen (a)){
			my_printf("yes\n");
		}
		else{
			my_printf("no\n");}
	}
	return 0;
}