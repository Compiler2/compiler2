#define NUM_ITER 1180732

#include <header.h>

int main_bench()
{
	char str1[80],str2[80];
	int a,i,k=0;
	gets(str1);
	gets(str2);
	a=strlen(str1);
	for(i=0;i<a;i++)
	{
		if(str1[i]>='a'&&str1[i]<='z') str1[i]=str1[i]-32;
		if(str2[i]>='a'&&str2[i]<='z') str2[i]=str2[i]-32;
		if(str1[i]==str2[i]) 
		{
			k++;
			continue;
		}
		else if(str1[i]>str2[i]) my_printf(">\n");
		else my_printf("<\n");
		break;
	}
	if(k==a) my_printf("=\n"); 
	return 0;
}