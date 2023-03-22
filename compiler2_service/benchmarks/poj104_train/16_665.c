#define NUM_ITER 1824023

#include <header.h>

int main_bench()
{
    int n,x,y,z,w,t;
    my_scanf("%d",&n);
    if(n<=9)
        my_printf("%d",n);
    else
    {    
        x=n%10;
        if(n<=99)
	{    
	    y=(n-x)/10;
            my_printf("%d%d",x,y);
	}
        else
        {    
            y=((n-x)/10)%10;
            t=x+10*y;
            if(n<=999)
	    {    
	        z=(n-t)/100;
                my_printf("%d%d%d",x,y,z);
	    }
            else
            {    
                z=((n-t)/100)%10;
                t=x+10*y+100*z;
                if(n<=9999)
		{     
	            w=(n-t)/1000;
                    my_printf("%d%d%d%d",x,y,z,w);
		}
            	else
                    my_printf("00001");
            }
        }
     }
     return 0;
}