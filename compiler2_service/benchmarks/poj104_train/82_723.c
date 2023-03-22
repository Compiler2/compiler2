#define NUM_ITER 29261

#include <header.h>

int main_bench()
{
	int n,shousuo[100],shuzhang[100],zanshi[100];
	int i,j,e;
	j=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&shousuo[i],&shuzhang[i]);
	}
	for(i=0;i<n;i++){
		if(shousuo[i]>=90&&shousuo[i]<=140&&shuzhang[i]>=60&&shuzhang[i]<=90&&i<n-1){
			j=j+1;
			zanshi[i]=0;
		}else if(shousuo[i]>=90&&shousuo[i]<=140&&shuzhang[i]>=60&&shuzhang[i]<=90&&i==n-1){
			j=j+1;;
			zanshi[i]=j;
		}
		else if(shousuo[i]<90||shousuo[i]>140||shuzhang[i]<60||shuzhang[i]>90){
			zanshi[i]=j;
			j=0;
		}
	}
	for(i=0;i<n-1;i++){
		if(zanshi[i]>zanshi[i+1]){
			e=zanshi[i];
			zanshi[i]=zanshi[i+1];
			zanshi[i+1]=e;
		}
	}
	my_printf("%d",zanshi[n-1]);
	return 0;
}