#include <header.h>


int main_bench()
{
        int l,i,j,tem,carry;
        char input[110];
        int in[110],out[110];
        my_scanf("%s",input);
        l=strlen(input);
        for(i=0;i<l;i++)
                in[i]=input[i]-'0';
        carry=in[0];
if(l==1){my_printf("0\n%d",in[0]);return 0;}
        for(i=1;i<l;i++)
        {
                tem=10*carry+in[i];
                out[i-1]=tem/13;
                carry=tem%13;
        }
        if(out[0]!=0)
        {
                my_printf("%d",out[0]);
                for(i=1;i<l-1;i++)
                  my_printf("%d",out[i]);
                my_printf("\n");
        }
        else if((out[0]==1||out[0]==0)&&l-1<2) my_printf("%d\n",out[0]);
        else if(out[0]==0&&l-1>1)
        {
                for(i=1;i<l-1;i++)
                        my_printf("%d",out[i]);
                my_printf("\n");
        }
                
        my_printf("%d",carry);
        return 0;
}