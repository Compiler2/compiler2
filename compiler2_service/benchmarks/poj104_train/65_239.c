#define NUM_ITER 31051

#include <header.h>

int main_bench(){
int a[10000],b[10000];
int n;
int x,y;
x=0;
y=0;
my_scanf("%d",&n);
for (int i=0;i<n;i++){
my_scanf("%d %d\n",&a[i],&b[i]);
}
for (int i=0;i<n;i++){
	if(a[i]==0){
		if (b[i]==0){x=x;y=y;}
		if (b[i]==1){x++;}
		if (b[i]==2){y++;}
}
    if(a[i]==1){
		if (b[i]==1){x=x;y=y;}
		if (b[i]==2){x++;}
		if (b[i]==0){y++;}
}
	if(a[i]==2){
		if (b[i]==2){x=x;y=y;}
		if (b[i]==0){x++;}
		if (b[i]==1){y++;}
}}
if (x==y){my_printf("Tie");}
if (x>y) {my_printf("A");}
if (x<y) {my_printf("B");}
	return 0;
}
