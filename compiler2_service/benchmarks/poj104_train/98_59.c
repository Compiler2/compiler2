#define NUM_ITER 31124

#include <header.h>

int main_bench()
{
    int i,n,sum=0,length[1000];
    char word[1000][50];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    my_scanf("%s",word[i]);
                    length[i]=strlen(word[i]);
    }
    for(i=0;i<n-1;i++)
    {
                    if(sum+length[i]<=80)
                    {
                                         if(sum+length[i]+length[i+1]+1<=80)
                                         {
                                                                            my_printf("%s ",word[i]);
                                                                            sum+=length[i]+1;
                                         }
                                         else
                                         {
                                             my_printf("%s\n", word[i]);
                                             sum=0;
                                         }
                                         
                    }                                         
                    
    }
    my_printf("%s", word[n-1]);
    return 0;
}
    
    