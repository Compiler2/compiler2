#define NUM_ITER 1055677

#include <header.h>

int main_bench()
{
   char a[100],b[100];
      int len1,len2,i,j;
      my_scanf("%s%s",a,b);
	  len1=strlen(a);
	  len2=strlen(b);
	  for(i=0;i<=len2-len1;i++)
	  {
		  for(j=i;j<i+len1-1;j++)
		  {
			  if(b[j]==a[j-i])continue;
			  else break;
		  }
			if(j==i+len1-1)
			{
				my_printf("%d",i);
				break;
			}
	  }
    return 0;
}

	