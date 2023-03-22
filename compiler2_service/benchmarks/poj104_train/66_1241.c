#define NUM_ITER 272035

#include <header.h>

int main_bench()
{
	int x,y,z,m,p,q,r,n,i=1,a[12],k;
    my_scanf("%d %d %d",&x,&y,&z);
    n=(x-1)%400;
    m=n%100;
    q=n/100;
    p=m%4;
    r=m/4;
    i+=5*q;
    i+=5*r;
    i+=p;
    a[0]=31;
    a[2]=31;
    a[4]=31;
    a[6]=31;
    a[7]=31;
    a[9]=31;
    a[11]=31;
    a[3]=30;
    a[5]=30;
    a[8]=30;
    a[10]=30;
    if(x%400==0||(x%4==0&&x%100!=0))
	{
		a[1]=29;
	}else{
		a[1]=28;
	}
    for(k=0;k<y-1;k++)
	{
		i+=a[k];
	}
    i+=z-1;
    i=i%7;
    switch(i)
	{
    case 0:
	    my_printf("Sun.\n");
        break;
    case 1:
        my_printf("Mon.\n");
        break;
    case 2:
        my_printf("Tue.\n");
        break;
    case 3:
        my_printf("Wed.\n");
        break;
    case 4:
        my_printf("Thu.\n");
        break;
    case 5:
        my_printf("Fri.\n");
        break;
    case 6:
        my_printf("Sat.\n");
        break;
	}
    return 0;
}