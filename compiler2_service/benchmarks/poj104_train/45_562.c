#define NUM_ITER 976497

#include <header.h>

main_bench()
{char str[50],substr[50],*p;
 int i,len;
 my_scanf("%s%s",substr,str);
 len=strlen(substr);
 p=str;
 while(*p!='\0')
	{int flag=1;
     for(i=0;i<len;i++)
		 if(*(p+i)!=substr[i])flag=0;
	 if(flag==1)break;
	 p++;
	}
 my_printf("%d",p-str);
}