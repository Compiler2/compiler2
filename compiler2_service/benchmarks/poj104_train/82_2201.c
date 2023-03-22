#define NUM_ITER 36348

#include <header.h>

int main_bench()
{
 int n,m,i,j,f,e,d,k;
 int q[10000],p[10000];
 e=0;
 k=0;
 my_scanf("%d",&n,&m);
 for(i=0;i<n;i++){
	 my_scanf("%d %d",&q[i],&p[i]);
	 if(q[i]<=140&&q[i]>=90&&p[i]>=60&&p[i]<=90)e++;
	 else e=0;
	 if(k<e)k=e;
 }



my_printf("%d",k);


 return 0;
}
     

