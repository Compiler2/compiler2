#define NUM_ITER 582211

#include <header.h>

int main_bench()
{
    char s[100],d[100][100]={'\0'},c[100]; 
    int i=0,j=0,k,weizhi1=-1,weizhi2,dancishu;
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
    	if (s[i]==' ')
    	{weizhi2=i;
    	 for (k=0;k<weizhi2-weizhi1-1;k++)
    	 {d[j][k]=s[weizhi1+k+1];}
    	 
    	 weizhi1=weizhi2;
    	 j++;
    	}
    }
    weizhi2=i;
    for (k=0;k<weizhi2-weizhi1-1;k++)
    	 {d[j][k]=s[weizhi1+k+1];}
    j++;
    dancishu=j;
    
    for(i=dancishu-1;i>0;i--)
    { 
    	my_printf("%s ",d[i]);
    }
    my_printf("%s",d[0]);
}