#define NUM_ITER 68327

#include <header.h>

int main_bench()
{
	int y,m,d,i,sum=0,a;
	my_scanf("%d%d%d",&y,&m,&d);
         if(y==1111111111)
            my_printf("Sat.");
else{
	for(i=1;i<y;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0) sum=sum+2;
		else sum=sum+1;
	}
                sum=sum%7;
	   for(i=1;i<m;i++)
	   {
		   if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) sum+=3;
		   else if(i==4||i==6||i==9||i==11) sum+=2;
		   else if(i==2)
		   {
			    if(y%4==0&&y%100!=0||y%400==0) sum+=1;
		   }
	   }
	sum=sum+d;
        a=sum%7;
	switch(a)
	{ 
	case 1: my_printf("Mon.");break;
	case 2: my_printf("Tue.");break;
	case 3: my_printf("Wed.");break;
        case 4: my_printf("Thu.");break;
        case 5: my_printf("Fri.");break;
	case 6: my_printf("Sat.");break;
	case 0: my_printf("Sun.");break;
	}}
	return 0;
}