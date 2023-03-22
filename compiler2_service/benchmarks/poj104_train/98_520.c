#include <header.h>

int main_bench()
{
    char word[1000][40];
    int number,count=0,i;
    my_scanf("%d",&number);
    for(i=0;i<number;i++)my_scanf("%s",word[i]);
    for(i=0;i<number;i++)
    {
        if(count+strlen(word[i])+1<=80)
        {
            if(i==0)
            {
                my_printf("%s",word[i]);
                count+=strlen(word[i]);
            }
            else
            {
                my_printf(" %s",word[i]);
                count+=strlen(word[i])+1;
            }
        }
        else
        {
            my_printf("\n%s",word[i]);
            count=strlen(word[i]);
        }
    }
    return 0;
}
