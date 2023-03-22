#define NUM_ITER 613686

#include <header.h>

int main_bench()
{
    int p=0,j,n,count[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
    char i;
    char a[301];
    my_scanf("%s",a);
    
    n=strlen(a);
    for(j=0;j<n;j++)
    {
        i=a[j];
        if(i<='z'&&i>='a')
        {
           count[i-97]++;
        }
    }
    for(i='a';i<='z';i++)
    {
        if(count[i-97]!=0)
        {
            my_printf("%c=%d\n",i,count[i-97]);
            p++;
        }
    }   
    if (p==0)
    my_printf("No");
    return 0;
}
