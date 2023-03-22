#define NUM_ITER 1218345

#include <header.h>

int main_bench()
{
    char s[30000],zj[300][100];
    int i=0,k,t=0,len[300];
    gets(s);
    while(s[i]!='\0')
	{
       k=0;
       while(s[i]!=' '&&s[i]!='\0')
	   {
           zj[t][k]=s[i];
           k++;
           i++;
	   } 
       zj[t][k]='\0'; 
       while(s[i]==' ')
	   {
           i++;
	   }
       t++;
	}
    zj[t][k+1]='\0';
    for(i=0;i<t;i++)
	{
	  len[i]=strlen(zj[i]);
	}
	my_printf("%d",len[0]);
    for(i=1;i<t;i++)
	{
	  my_printf(",%d",len[i]);
	}
    return 0;
}
