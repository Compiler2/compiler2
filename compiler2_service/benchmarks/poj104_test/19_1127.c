#include <header.h>

int main_bench()
{
	char n[5000];char m[100][20];
	char s1[20],s2[20];
	gets(n);gets(s1);gets(s2);
	int i,j=0,k=0,e;
	e=strlen(n);
		for(i=0;i<e;i++)
	{
		if(n[i]!=' ')
		{
			m[j][k]=n[i];
			k++;
		}
		 if(n[i]==' ')
		{
			m[j][k]='\0';
			j++;
			k=0;
		}
          }
                   m[j][k]='\0';	
        		for(i=0;i<=j;i++)
	{
		if(strcmp(m[i],s1)==0)
                  strcpy(m[i],s2);
		 
	}
         
	my_printf("%s",m[0]);
	for(i=1;i<=j;i++)
	{
			
	my_printf(" %s",m[i]);
          }
	return 0;
}


