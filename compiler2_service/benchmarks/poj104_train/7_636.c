#include <header.h>

int main_bench()
{
	char a[100];
	char b[100];
	char c[100];
	int i,j,m,k;
    int n=0;
	my_scanf("%s",a);
	my_scanf("%s",b);
	my_scanf("%s",c);
    m=strlen(b);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b[0]){
			n=0;
			for(j=0;b[j]!='\0';j++){
				if(a[i+j]==b[j])n++;
			}
			if(m==n)break;
		}
	}
if(m==n){
	for(k=0;k<i;k++){
		my_printf("%c",a[k]);
	}
    my_printf("%s",c);
	for(k=i+m;a[k]!='\0';k++){
		my_printf("%c",a[k]);
	}
}
	
	
	if(n!=m)
		my_printf("%s",a);
	return 0;
}
	


