#define NUM_ITER 1074016

#include <header.h>

int main_bench()
{
	char s[100],b[100]={0};
	int len,i,j,k,m;
    gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
		b[i+1]=s[i];
	for(i=2;i<=len;i++)
		for(j=1;j<=len+1-i;j++)
		{
		
	     for(k=j;k<=(2*j+i-1)/2;k++)
		 {
	     	if(b[k]==b[i+2*j-1-k])continue; 
			else break;
			
		 }
      	if(k==(i+2*j-1)/2+1)  
			{
				for(m=j;m<j+i-1;m++)
		         my_printf("%c",b[m]);my_printf("%c\n",b[j+i-1]); 
			}
		
		}
		
		return 0;
}
