#include <header.h>

int p[5][5];
int n,m;
int main_bench()
{
    int exchange();
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            my_scanf("%d",&p[i][j]);
    my_scanf("%d %d",&n,&m);
    if(exchange())
       for(int i=0;i<5;i++)
           {
           my_printf("%d",p[i][0]);
            for(int j=1;j<5;j++)
                my_printf(" %d",p[i][j]);
           my_printf("\n");  
           }
    else
        my_printf("error");
        
}
int exchange()
{
    if(n<5&&n>=0&&m<5&&m>=0)
       {
       for(int i=0;i<5;i++)
           {
           int temp=p[n][i];
           p[n][i]=p[m][i];
           p[m][i]=temp;    
           }          
       return 1;           
       }    
    else
        return 0;
}
