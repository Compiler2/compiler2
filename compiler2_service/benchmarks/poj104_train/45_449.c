#define NUM_ITER 1059318

#include <header.h>

main_bench()
{char substring[50],string[50];
 int i,j,len1,len2;
 char*p1=substring;
 char*p2=string;
 my_scanf("%s %s",substring,string);
 len1=strlen(substring);
 len2=strlen(string);
 for(i=0;i<len2;i++)
	{for(j=0;j<len1;j++)
	    if(*(p2+i+j)!=*(p1+j))break;
	if(j==len1)break;
	}
 my_printf("%d",i);
}