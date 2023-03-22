#define NUM_ITER 21980

#include <header.h>

int main_bench()
{
    char str[100000];
    char *p;
    int n,i;
    my_scanf("%d",&n);
    gets(str);
    for (i=0;i<n;i++)
    {	
		int times[256]={0};
        gets(str);
        p=str;
        while('\0'!=*p)
        {
             times[*p]++;
             p++;
        }
        p=str;
        while('\0'!=*p)
        {
             if(1==times[*p])
             {
                my_printf("%c\n",*p);
                break;
              }
			 p++;
        }
        if ('\0'==*p)
           my_printf("no\n");
     }
     return 0;
}