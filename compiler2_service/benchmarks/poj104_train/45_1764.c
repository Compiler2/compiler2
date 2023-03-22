#include <header.h>

int main_bench()
{
	int n,i=0,j,m,good;
	char a[50];
	char b[50];
	my_scanf("%s%s",a,b);
	n=strlen(a);
	while (b[i]!='\0'){
        good=0;
		for (j=i,m=0;m<n;j++,m++){
			if (a[m]!=b[j]){
				good++;
			}
		}
		if (good==0){
			my_printf("%d",j-m);
			break;
		}
		i++;
	}
	return 0;
}
