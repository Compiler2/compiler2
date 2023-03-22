#include <header.h>

int a(int m,int n)
{
    int s[5][5];
    if(m>-1)
    {
        if(m<5)
        {
            if(n>-1)
            {
                if(n<5)
                {
                
                  
                        return 1;
            
                   
                }
                   else return 0;
                }
                else return 0;
            }
            else return 0;
        
    }
    else return 0;
}

int main_bench()
{
    int s[5][5];
    int i,j,m,n,x,t;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            my_scanf("%d",&s[i][j]);
        }
    }
    
    my_scanf("%d%d",&m,&n);
    
    x=a(m,n);
    
    
    if(x==1)
    {
        for(i=0;i<5;i++)
        {
            t=s[m][i];
            s[m][i]=s[n][i];
            s[n][i]=t;
        }
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(j==4) my_printf("%d\n",s[i][j]);
                else my_printf("%d ",s[i][j]);
            }
        }
    }
    
    else my_printf("error");
    
}
