#define NUM_ITER 1034775

#include <header.h>

int main_bench()
{
	int n,i;
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
	for(i=0;i<79;i++)
	{
		if((str1[i]>='A')&&(str1[i]<='Z'))str1[i]=str1[i]+32;
        if((str2[i]>='A')&&(str2[i]<='Z'))str2[i]=str2[i]+32;
		if((str1[i]=='\0')&&(str2[i]=='\0'))break;
	}
	    if(strcmp(str1,str2)>0)my_printf(">\n");
		else if(strcmp(str1,str2)<0)my_printf("<\n");
		else my_printf("=\n");
        return 0;
}

