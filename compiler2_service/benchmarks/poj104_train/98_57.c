#include <header.h>


int main_bench(){
    int n,i,x,linelen=0;
    char words[40];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            my_scanf("%s",words);
            if (linelen==0)
            x=strlen(words);
            else
            x=strlen(words)+1;
            if(linelen==0)
            {
                my_printf("%s",words);
                linelen+=x;
            }
            else if((linelen+x)<80)
            {
                my_printf(" %s",words);
                linelen+=x;
            }
            else if((linelen+x)==80)
            {
                my_printf(" %s\n",words);
                linelen=0;
            } 
            else if((linelen+x)>80)
            {
                 my_printf("\n%s",words);
                 linelen=x;
                 linelen--;
            }
    }

    return 0;    
}
