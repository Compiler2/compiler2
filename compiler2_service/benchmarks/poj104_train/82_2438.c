#define NUM_ITER 30024

#include <header.h>

int main_bench()
{
	int  n;int  a[100][2];
int  i=0;
int x=0;int c=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
for(int  j=0;j<2;j++)
            my_scanf("%d",&a[i][j]);
}
 
for(i=0;i<n;i++){
	if(90<=a[i][0]&&a[i][0]<=140&&60<=a[i][1]&&a[i][1]<=90){
   x++;
   if(x>c)  c=x;
	}
	else 
		x=0;
 }
my_printf("%d",c);
 return 0;
}