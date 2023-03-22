#include <header.h>

int main_bench(){
	int i,j,b,c[100];
	char a[100];
	gets(a);
	b=strlen(a);
	for(i=0;i<=b;i++)
	c[i]=0;
	for(i=0;i<b;i++){
		if(a[i]==' ')
		c[i]=1;
	}
	for(i=0;i<b;i++){
		if(c[i]==0&&(c[i+1]==0||a[i+1]=='\n'))
	    my_printf("%c",a[i]);
	    else if(c[i]==0&&c[i+1]==1)
	    my_printf("%c ",a[i]);
}
	return 0;
}