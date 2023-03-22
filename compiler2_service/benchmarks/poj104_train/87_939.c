#include <header.h>


int main_bench(){
	int a,b,c,d,e,f,result;

	my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
	     result=0;
		 d=d+12;
         result=(d-(a+1))*3600;
         result+=e*60+f+3600-(b*60+c);
		 if (result!=0) {my_printf("%d\n",result);}
		 my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}

    return 0;
}
