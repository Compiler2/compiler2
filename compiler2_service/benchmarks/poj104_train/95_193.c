#define NUM_ITER 928337

#include <header.h>

int main_bench()
{
	int i;
	char str1[80],str2[80],c;
	gets(str1);
	gets(str2);
	for(i=0;(c=str1[i])!='\0';i++)
		if(c>='A'&&c<='Z') str1[i]=c+32;
	for(i=0;(c=str2[i])!='\0';i++)
		if(c>='A'&&c<='Z') str2[i]=c+32;
	
	if(strcmp(str1,str2)>0) my_printf(">\n");
	else if(strcmp(str1,str2)<0) my_printf("<\n");
	else my_printf("=\n");



	return 0;
}

