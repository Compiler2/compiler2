#define NUM_ITER 943177

#include <header.h>

int main_bench()
{
	char str1[100],str2[100];
	int i,j,len1,len2;
	my_scanf("%s%s",str1,str2);
	if((len1=strlen(str1))!=(len2=strlen(str2)))my_printf("NO\n");
         else
   {
	for(i=0;i<len1;i++)
		for(j=0;j<len2;j++)
		{
			if(str1[i]==str2[j])
				str1[i]='\0',
				str2[j]='\0';
		}
	for(i=0;i<len1;i++)
		if(str1[i]!='\0')break;
	if(i<len1)my_printf("NO\n");
	else my_printf("YES\n");
   }
}