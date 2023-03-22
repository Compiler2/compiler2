#define NUM_ITER 370521

#include <header.h>

int main_bench()
{
    char s[300];
    my_scanf("%s",s);
    int len,i,j,k,w,count[26]={0};
    len=strlen(s);
    w=0;
    for(i=0;i<26;i++)
    {
        for(j=0;j<len;j++)
        {
            if(s[j]==('a'+i)) count[i]++;
        }
        if(count[i]!=0) w=1;
    }
    if(w==0) my_printf("No");
    if(w==1)
    {
        for(i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                my_printf("%c=%d\n",'a'+i,count[i]);
            }
        }
    }
    return 0;
}