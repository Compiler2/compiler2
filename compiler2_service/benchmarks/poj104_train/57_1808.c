#include <header.h>


int main_bench()
{
	int n,i,len,zzz,m;
	my_scanf("%d",&n);
	char a[30];
	for(i=0;i<n;i++){
		my_scanf("%s",a);
		len=strlen(a);
		if(a[len-1]=='g')  zzz=len-4;
		else  zzz=len-3;
		for(m=0;m<=zzz;m++) my_printf("%c",a[m]);
		my_printf("\n");
	}

	return 0;
}