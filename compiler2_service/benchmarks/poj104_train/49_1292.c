#define NUM_ITER 1124929

#include <header.h>

int jodge(char s[501],int x,int y)
{
    int i,k=0;
    for(i=x;i<x+(y-x+1)/2;i++)
    {
        if(s[i]!=s[y+x-i])
            return 0;
        else
            k++;
    }
    if(k==(y-x+1)/2)
        return 1;
    else
        return 0;
}
void f(char s[501],int x)
{
     int j,i,k;
     for(i=2;i<=x;i++)
     {
         for(j=0;j<x+1-i;j++)
         {
            if(jodge(s,j,j+i-1)==1)
            { 
                for(k=j;k<=j+i-1;k++)
                 my_printf("%c",s[k]);
                 my_printf("\n");
             }
         }
     }

}
int main_bench()
{
    char s[501];
    int i,j,k,t;
    my_scanf("%s",s);
    k=strlen(s);
    f(s,k);
    return 0;
}