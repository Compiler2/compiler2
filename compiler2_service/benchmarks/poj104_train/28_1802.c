#define NUM_ITER 1211275

#include <header.h>


int main_bench()
{
    char s[1000];
    gets(s);
    int i, count[200], len, j=0;
    int first=1;
    len=strlen(s);
    memset(count, 0, sizeof(count));
    for(i=0; i<len; i++)
    {
        if(s[i]!=' ')
        {
			
           do
            {
                count[j]++;
                i++;
            }while((i!=len)&&(s[i]!=' '));
            
			j++;

        }
    }
    for(i=0; i<j; i++)
    {
        if(first)
        first=0;
        else my_printf(",");
        my_printf("%d", count[i]);
    }
	my_printf("\n");
    return 0;
}
