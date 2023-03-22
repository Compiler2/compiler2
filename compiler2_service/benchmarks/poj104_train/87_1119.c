#define NUM_ITER 12994

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f;
	int sum,i;
	for(i=0;i<100;i++){
	my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
	  sum=60-c+(59-b)*60+e*60+f+(d+12-a-1)*60*60;
	  my_printf("%d\n",sum);
      }
	else{break;};
}
	return 0;
}
 
 