#define NUM_ITER 10622

#include <header.h>

int main_bench(){
	char p[200][10],q[200][10]={0},c[10];
int a[200],b[200];
int n,i,j,x,y,t;
my_scanf ("%d",&n);
for (i=0;i<n;i++){
	my_scanf ("%s",p[i]);
	my_scanf ("%d",&a[i]);
}
j=0;
x=0;
t=0;
y=0;
for (i=0;i<n;i++){
	if (a[i]>=60){
	b[j]=a[i];
	strcpy(q[j],p[i]);
	j++;
	t++;
}
}
for (j=t-1;j>0;j--){
for (i=0;i<j;i++){
if (b[i]<b[i+1]){
int r;
r=b[i+1];
strcpy(c,q[i+1]);
b[i+1]=b[i];
strcpy(q[i+1],q[i]);
b[i]=r;
strcpy(q[i],c);
}
}
}
for (i=0;i<t;i++){
	my_printf ("%s\n",q[i]);
}
for (i=0;i<n;i++){
	if (a[i]<60){
	my_printf ("%s\n",p[i]);}
}
return 0;
}
