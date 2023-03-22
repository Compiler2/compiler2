#define NUM_ITER 967250

#include <header.h>

main_bench()
{
    char str[256];
    char sub[256];
    char re[256];
    my_scanf("%s",str);
    my_scanf("%s",sub);
    my_scanf("%s",re);
    int i,j,k,p;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==sub[0])
        {
            k=i;
            for(j=0;sub[j]!='\0';j++)
            {
                if(str[i]==sub[j])
                i++;
                else
                break;
            }
            i--;
            if(sub[j]!='\0')
               i=k;
            else
                break;
        }
    }
    if(str[i]=='\0')
        my_printf("%s",str);
    else
    {
        for(p=0;p<k;p++)
           my_printf("%c",str[p]);
        my_printf("%s",re);
        for(p=i+1;str[p]!='\0';p++)
            my_printf("%c",str[p]);
    }
}
