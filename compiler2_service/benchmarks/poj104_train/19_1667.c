#define NUM_ITER 786092

#include <header.h>

int main_bench()
{
    char s[100],a[100],b[100],t[100];
    int i,j;
    gets(s);
    gets(a);
	gets(b);
    for(i=0;i<strlen(s);i++)
    {
        j=0;
        while(s[i]!=' '&&s[i]!='\0')
			t[j++]=s[i++];
			t[j]='\0';
        if(strcmp(a,t)==0)
		{
			my_printf("%s",b);

		}
        else
        {
			my_printf("%s",t);
        }
 		if(i==strlen(s))
		{
			my_printf("\0");
		}
		else my_printf(" ");
	}
        return 0;
}