#define NUM_ITER 118

#include <header.h>

int main_bench()
{
   int a,b,c,d,e,f,i,g,h;
   for(i=0;i<10000;i++){
   my_scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
   if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
   h=(60-c)+(59-b)*60+(11-a)*3600+f+e*60+d*3600;
   my_printf("%d\n",h);
   }
   }

 
	
	
	return 0;
}