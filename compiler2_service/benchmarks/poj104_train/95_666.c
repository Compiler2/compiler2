#define NUM_ITER 913109

#include <header.h>

main_bench()
{
	int k,i;
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
for(i=0;str1[i]!='\0';i++)
 str1[i]=toupper(str1[i]);
for(i=0;str2[i]!='\0';i++)
 str2[i]=toupper(str2[i]);
if(strcmp(str1,str2)==0) k=0;
if(strcmp(str1,str2)>0) k=1;
if(strcmp(str1,str2)<0) k=-1;
	if(k==0) my_printf("=\n");
	else if(k==1) my_printf(">\n");
	else if(k==-1) my_printf("<\n");
}