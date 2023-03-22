#define NUM_ITER 76927

#include <header.h>

int main_bench()
{
	int a,b,c,A,B,C,j,s=0,n=0,y;
	my_scanf("%d %d %d",&a,&b,&c);

	A=(a-1)/4;
	B=A/25;
	C=B/4;
	s=A+C-B;
	n=2*s+1*(a-1-s);

for(j=1;j<b;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10)
		{
			n+=31;
		}
		else if(j==4||j==6||j==9||j==11)
		{
			n+=30;
		}
		else
		{
			if((a%400==0)||(a%4==0)&&(a%100!=0))
			{
				n+=29;
			}
			else
			{
				n+=28;
			}
		}
	}
	n+=c;
	y=n%7;
	switch(y){
	case 1:{
		my_printf("Mon.");
		break;
		   }
	case 2:{
		my_printf("Tue.");
		break;
		   }
	case 3:{
		my_printf("Wed.");
		break;
		   }
	case 4:{
		my_printf("Thu.");
		break;}
	case 5:{
		my_printf("Fri.");
		break;
		   }
	case 6:{
		my_printf("Sat.");
		break;
		   }
	case 0:{
		my_printf("Sun.");
		break;
		   }
	}
	return 0;
}

