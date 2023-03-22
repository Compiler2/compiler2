#include <header.h>


int main_bench()
{
    int q;
    char s[50];
    char w[50];
    my_scanf ("%s",s);
    my_scanf ("%s",w);
    int i,j,p;
    i=strlen(s);
    j=strlen(w);
    if(i==1)
    {
        for (p=0;p<=j-i+1;p++)
        {
                         if(w[p]==s[0])
                         my_printf("%d",p);
        }
    }
    else
    {
         for (p=0;p<=j-i+1;p++)
         if(w[p]==s[0]&&w[p+i-1]==s[i-1]){
                         my_printf("%d",p);

                         exit(0);}
        }
        
    return 0;
    
    } 
