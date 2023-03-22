#define NUM_ITER 184417

#include <header.h>

 int main_bench()
 {
	char str1[80],str2[80];
	int i;
	gets(str1);
	gets(str2);
	for(i=0;i<80;i++)
	if(str1[i]>=97&&str1[i]<=122)
			str1[i]=str1[i]-32;
	for(i=0;i<80;i++)
	if(str2[i]>=97&&str2[i]<=122)
			str2[i]=str2[i]-32;
    if(strcmp(str1,str2)<0)
	my_printf("<");
	if(strcmp(str1,str2)>0)
		my_printf(">");
	if(strcmp(str1,str2)==0)
		  my_printf("=");
 }