#define NUM_ITER 1639929

#include <header.h>

int main_bench()
{
	int i,j=0;
	char c[30],str[30];
	gets(c);
	for (i=0;c[i-1]!='\0';i++)
		if(c[i]<='9'&&c[i]>='0')
			str[j]=c[i],j++;
		else
			if(j!=0)
			str[j]='\0',my_printf("%s\n",str),j=0;
		return 0;
}
