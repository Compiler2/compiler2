#define NUM_ITER 20439

#include <header.h>

char str[120];int n;
void dispose(int x)
{
    int i,j,k=0;
    for(i=x+1,k=0;i<n;i++)
    {
        if(str[i]=='('&&k==0)
        {    
            dispose(i);
            k++;
            
        }
        if(str[i]==')')
        {
            str[i]=' ';
            str[x]=' ';
            for(j=i+1;j<n;j++)
            {
                if(str[j]=='(')
                {
                    dispose(j);
                }
            }
            break;
        }
    }
}
main_bench()
{
    int N,e;my_scanf("%d",&N);
    for(e=0;e<N;e++)
    {
        my_scanf("%s",str);my_printf("%s\n",str);
        int i,j,k;n=strlen(str);
        for(i=0;i<n;i++)
        {
            if(str[i]=='(') break;
        }
        dispose(i);
        for(i=0;i<n;i++)
        {
            if(str[i]=='(') my_printf("$");
            else 
            {
                if(str[i]==')') 
                    my_printf("?");
                else 
                    my_printf(" ");
            }
        }
        my_printf("\n");
    }
    }