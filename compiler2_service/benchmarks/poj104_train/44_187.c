#define NUM_ITER 476563

#include <header.h>

int reverse(int num)
{
    int x,answer=0;
    if(num>0)
    {
             do
             {
                     x=num%10;
                     answer=x+answer*10;
                     num=num/10;
             }
             while(num!=0);
             return answer;
    }
    else if(num==0)
         return 0;
    else
    {
             num=-num;
             do
             {
                     x=num%10;
                     answer=x+answer*10;
                     num=num/10;
             }
             while(num!=0);
             answer=-answer;
             return answer;
    }
}
int main_bench()
{
    int j,y;
    for(j=0;j<6;j++)
    {
                    my_scanf("%d",&y);
                    int result=reverse(y);
                    my_printf("%d\n",result);
    }
}
