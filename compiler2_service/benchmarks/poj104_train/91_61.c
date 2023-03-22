#include <header.h>

int main_bench()
{
	char a[101],b[101];
	int i,len;
	gets(a);
	len=strlen(a);
	for(i=0;i<len-1;i++){
	*(b+i)=*(a+i)+*(a+i+1);
	}
	*(b+len-1)=*(a+len-1)+*(a+0);
	for(i=0;i<len;i++){
	my_printf("%c",*(b+i));
	}
	return 0;
}
