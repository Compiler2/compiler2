#include <header.h>

int main_bench()
{
    int i,j;
	char a1[40],a2[40];
	gets(a1);
	gets(a2);

    for(i=0;a1[i]!='\0';i++)
	{if(a1[i]>='A'&&a1[i]<='Z')
	a1[i]=a1[i]-'A'+'a';}
	 for(i=0;a2[i]!='\0';i++)
	{if(a2[i]>='A'&&a2[i]<='Z')
	a2[i]=a2[i]-'A'+'a';}
     j=0;
	  if(a1[j]>a2[j])
	  my_printf(">");
	  if(a1[j]<a2[j])
		  my_printf("<");
	 while((a1[j]==a2[j])&&(a1[j]!='\0')&&(a2[j]!='\0'))
	 {j++;
	 if(a1[j]=='\0'&&a2[j]=='\0')
		  my_printf("=");
	  if(a1[j]>a2[j])
	  my_printf(">");
	  if(a1[j]<a2[j])
		  my_printf("<");
	  }
}