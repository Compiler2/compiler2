#define NUM_ITER 190807

#include <header.h>


int main_bench(){
	int a,b,c,x,y,z,j,s;
	
	my_scanf("%d%d%d",&a,&b,&c);
	x=0;
	y=0;
	z=0;
	x=(a-1)+(a-1)/4-(a-1)/100+(a-1)/400;
	for(j=1;j<b;j++){
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){
			y+=31;
		}
		else if(j==4||j==6||j==9||j==11){
				y+=30;
		}
		else if(j==2){
					if(a%4==0){
						y+=29;
					}
					else{
						y+=28;
					}
		}
	}
			z=(x+y+c);
			s=z%7;

				switch (s)
				{
			case 0:
				my_printf("Sun.");
				break;
			case 1:
				my_printf("Mon.");
				break;
			case 2:
				my_printf("Tue.");
				break;
			case 3:
				my_printf("Wed.");
				break;
			case 4:
				my_printf("Thu.");
				break;
			case 5:
				my_printf("Fri.");
				break;
			case 6:
				my_printf("Sat.");
				break;
				}
		
		return 0;	
}