#define NUM_ITER 642211

#include <header.h>

int main_bench()
{
	int i,j;
	char str[20],str1[20],str2[20];
	my_scanf("%s%s",str,str1);
	if(strlen(str)<strlen(str1))
	{
		strcpy(str2,str);
		strcpy(str,str1);
		strcpy(str1,str2);
	}
	for(i=0;i<strlen(str);i++)
		for(j=0;j<strlen(str1);j++)
		{
			if(str[i]==str1[j])
			{
				str1[j]='0';
				break;
			}
		}
	for(i=0;i<strlen(str);i++)
	{
		if(str1[i]!='0')
		{
			my_printf("NO\n");
			break;
		}
	}
	if(i>strlen(str)-1)
		my_printf("YES\n");
}
