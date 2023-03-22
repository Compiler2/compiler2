#define NUM_ITER 1098899

#include <header.h>

int main_bench()
{
	int n=0,i,len1,len2,j=0;
	char s[50],w[50],t[50]={'\0'};
    my_scanf("%s",s);
	my_scanf("%s",w);
    len1=strlen(w);
	len2=strlen(s);
	for(i=0;i<len1-len2;i++)
	{
       for(j=0;j<len2;j++)
		   t[j]=w[i+j];
	   if(strcmp(t,s)==0)
		   break;
	   else 
	   { n=n+1;
	     strcpy(t,"\0\0\0\0\0\0\0\0\0\0");
	   }
	}
	my_printf("%d",n);
}


