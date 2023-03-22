#define NUM_ITER 959884

#include <header.h>

int main_bench()
{
	char a[101],t[101];
	char b[101];
	char c[101];
	gets(a);
	gets(b);
	gets(c);
	int found=0,i,j;
	memset(t,'\0',sizeof(t));
	for(i=0,j=0;a[i-1]!='\0';i++,j++)
	{ 		
		if(a[i]!=' '&&a[i]!='\0')
		{
			t[j]=a[i];
		}
		if(a[i]==' '||a[i]=='\0')
		{
			t[j+1]='\0';
			if(strcmp(t,b)==0)
			{
				strcpy(t,c);
			}
			if(found++)
			{
				my_printf(" ");
			}
				my_printf("%s",t);
				j=-1;
			memset(t,'\0',sizeof(t));
		}
		
	}	
	return 0;
}
