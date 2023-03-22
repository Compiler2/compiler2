#define NUM_ITER 68724

#include <header.h>

int main_bench()
{
	int n,i,y,m,d,sum=0;
	my_scanf("%d%d%d",&y,&m,&d);
	y=y%2800;
	for(i=1;i<y;i++){ 
		if(i%4==0&&i%100!=0||i%400==0)
			sum+=2;
		else sum+=1;
	}
	
	for(i=1;i<m;i++){
		switch(i){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			sum+=3;
	    	break;
        case 2:
        if(y%4==0&&y%100!=0||y%400==0)
			   sum+=1;
		else sum+=0;
	    	break;
		case 4:
		case 6:
		case 9:
		case 11:
			sum+=2;
	    	break;
		}
	}
	sum+=d;
    n=sum%7;
	switch(n){
	case 1:my_printf("Mon.");
		break;
	case 2:my_printf("Tue.");
		break;
	case 3:my_printf("Wed.");
		break;
	case 4:my_printf("Thu.");
		break;
	case 5:my_printf("Fri.");
		break;
	case 6:my_printf("Sat.");
		break;
    case 0:my_printf("Sun.");
		break;
	}
    
	return 0;
}