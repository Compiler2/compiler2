#include <header.h>

int main_bench (){
	char a[300],b[300];
	int i,j,n;
	gets(a);
	n=strlen(a);
	j=0;
		for(i=0;i<=n;i++){
		if(a[i]!=' '){
			b[j]=a[i];
			j++;
		}
		else if(a[i]==' '&&a[i+1]!=' '){
			b[j]=a[i];
			j++;
		}
		else if(a[i]=='\0')
                            b[j]=a[i];
	}
	my_printf("%s",b);

	return 0;
}
