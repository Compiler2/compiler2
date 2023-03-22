#include <header.h>


int main_bench()
{	char a[100],b[100];
	my_scanf("%s%s",a,b);
	int i=0,j=0;
	for(i=0;i<strlen(b);i++){
		if(a[j]==b[i]){
			j++;
			if(j==strlen(a))my_printf("%d",i-j+1);
		}
		else j=0;
	}
	
	return 0;
}