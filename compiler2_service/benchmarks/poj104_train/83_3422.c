#define NUM_ITER 20914

#include <header.h>

int main_bench()
{
int m,a[123],c[123],i,j,k,l;
float b[123],o;
my_scanf("%d",&m);
i=0;
l=0;
while(i<m){
	my_scanf("%d",&a[i]);
	l=l+a[i];
	i++;
}
j=0;
while(j<m){
my_scanf("%d",&c[j]);
if(c[j]>=90&&c[j]<=100){b[j]=4.0;}
else if(c[j]<=89&&c[j]>=85){b[j]=3.7;}
else if(c[j]<=84&&c[j]>=82){b[j]=3.3;}
else if(c[j]<=81&&c[j]>=78){b[j]=3.0;}
else if(c[j]<=77&&c[j]>=75){b[j]=2.7;}
else if(c[j]<=74&&c[j]>=72){b[j]=2.3;}
else if(c[j]<=71&&c[j]>=68){b[j]=2.0;}
else if(c[j]<=67&&c[j]>=64){b[j]=1.5;}
else if(c[j]<=63&&c[j]>=60){b[j]=1.0;}
else {b[j]=0;}
j++;
}
o=0;
k=0;
while(k<m){
o=o+a[k]*b[k];
k++;
}
o=o/l;
my_printf("%.2f",o);
return 0;
}