#define NUM_ITER 170296

#include <header.h>

int main_bench()
{
    int num[301];
    char ch;
    int tempnum=0,i;
    int p=0;
    while (1)
    {  
        my_scanf("%c",&ch);
        if (ch=='\n') 
        {
            num[p]=tempnum;
            p++;
            break;
        }
        else if(ch==',')
        {
            num[p]=tempnum;
            tempnum=0;
            p++;
        }
        else
        tempnum=tempnum*10+ch-'0';
    }
    int max=0;
    for (i=0; i<p; i++) 
        if (num[i]>max)
            max=num[i];
    for (i=0; i<p; i++)
        if (num[i]==max) 
            num[i]=0;
    max=0;
    for (i=0; i<p; i++)
        if (num[i]>max) 
            max=num[i];
    if(max==0)
        my_printf("No\n");
    else
        my_printf("%d",max);
    getchar();
    getchar();
    return 0;
}