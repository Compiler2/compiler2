#define NUM_ITER 25129

#include <header.h>

int main_bench()
{
        int t,i,j,k,h,s,n=0;
    char m[100][10000],b[100];
        my_scanf("%d",&t);
        for(i=0;i<t;i++)
        {   
                my_scanf("%s",m[i]);
                n=0;
               h=strlen(m[i]);
                for(j=0;j<=h-1;j++)
                {
                        n=0;
                        for(k=0;k<=h-1;k++)
                        {                                
                                if((m[i][j]==m[i][k])&&(j!=k))
                                {
                                        n=1;break;
                                }
                        
                        }
                    if(n==0)
                        {
                                b[i]=m[i][j];
                                 break;
                        }
                    
                }
                if(n==1)
                        {
                             b[i]=1;
                        }
        }
        for(s=0;s<=t-1;s++)
        {
                if(b[s]==1)
                {
                        my_printf("no\n");
                }
                else 
                {
                        my_printf("%c\n",b[s]);
                }
        }
        return 0;
}