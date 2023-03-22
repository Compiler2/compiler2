#include <header.h>

int main_bench()
{
	char zf[31];
	int i,j,k;
	gets(zf);
	for (i=0;zf[i]!='\0';i++){
		if (zf[i]=='0'||zf[i]=='1'||zf[i]=='2'||zf[i]=='3'||zf[i]=='4'||zf[i]=='5'||zf[i]=='6'||zf[i]=='7'||zf[i]=='8'||zf[i]=='9')
			my_printf("%c",zf[i]);
		else my_printf("\n");
	}
	return 0;
}
