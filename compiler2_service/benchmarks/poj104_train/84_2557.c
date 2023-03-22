#define NUM_ITER 40177

#include <header.h>


int main_bench()
{
int max(int x,int y);
int min(int x,int y);
 int i=1,n,a,s,d,f,g;
 my_scanf("%d",&n);
 while(i<=n){
  my_scanf("%d\n",&a);
  if(i==1) { s=a;d=a;}
  else  { f=d;g=s;
        s=max(s,a);d=min(g,a);d=max(d,f); 
    }
  i++;
 }
 
  my_printf("%d\n%d\n",s,d);
 return 0;
}
int max(int x,int y){
int z; 
z=x>y? x:y;
return(z);
}
  int min(int x,int y){
 int z; 
z=x<y? x:y;
return(z);
}    



