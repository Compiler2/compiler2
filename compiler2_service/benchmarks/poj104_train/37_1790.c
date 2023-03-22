#include <header.h>

char in[100000];
int main_bench()
{
     
      int t,k,i,j,m,num[26];
	  
      my_scanf("%d",&t);
      for(k=1;k<=t;k++)
	  {
           m=0;
           for (i=0;i<=25;i++) num[i]=0;
           my_scanf("%s",in);
           for(i=0;in[i]!='\0';i++)
           {
                j=in[i]-97;
                num[j]++;                   
           }
		   for(i=0;in[i]!='\0';i++)
		   {
			   if(num[in[i]-97]==1)
			   {my_printf("%c\n",in[i]);m=1;break;}
		   }
           if (m==0)my_printf("no\n");
           
      } 

}