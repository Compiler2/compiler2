#include <header.h>

int main_bench(){
	int a,b,c,d,e,f,s,i;
	my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	for(i=1;i<100;i++){
	  if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
		s=0;
       s+=(d+11-a)*3600;
	   s+=3600-b*60-c;
	   s+=e*60+f;
       my_printf("%d\n",s);
	   }else{
		   break;
	   }

       my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}