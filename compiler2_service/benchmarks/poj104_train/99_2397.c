#define NUM_ITER 55607

#include <header.h>

int main_bench()
{
int n,i,nl[100],a=0,b=0,c=0,d=0;
double q,w,e,r;
my_scanf("%d",&n);
for(i=0;i<n;i++){
 my_scanf("%d",&nl[i]);
 if(nl[i]>0&&nl[i]<19)
	 a++;
 else if (nl[i]>18&&nl[i]<36)
	 b++;
     else if (nl[i]>35&&nl[i]<61)
		 c++;
	     else d++;
}
q=a*1.0/n;
w=b*1.0/n;
e=c*1.0/n;
r=d*1.0/n;
my_printf("1-18: %.2lf%%\n",q*100);
my_printf("19-35: %.2lf%%\n",w*100);
my_printf("36-60: %.2lf%%\n",e*100);
my_printf("60??: %.2lf%%\n",r*100);
return 0;
}
