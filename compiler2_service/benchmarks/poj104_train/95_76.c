#define NUM_ITER 280620

#include <header.h>


int main_bench()
{
	char a[80],b[80],p,q;
	gets(a);gets(b);
	int i;
	for(i=0;a[i]!='\0';i++){
		for(p='A',q='a';p<='Z';p++,q++){
			if(a[i]==p) a[i]=q;
			if(b[i]==p) b[i]=q;
		}
	}
	i=strcmp(a,b);
	if(i==0) my_printf("=\n");
	if(i<0) my_printf("<\n");
	if(i>0) my_printf(">\n");
	return 0;
}