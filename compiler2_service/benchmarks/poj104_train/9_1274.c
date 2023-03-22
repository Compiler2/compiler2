#define NUM_ITER 11729

#include <header.h>



int main_bench()
{

	int n,j=0,i,num=0,t;
	char a[100][10],d[100][10],temp[10];
	int b[100],c[100];

	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s %d",a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(b[i]>=60){
			c[j]=b[i];
			strcpy(d[j],a[i]);
			j++;
			num=j;
		}
	}
	for(i=1;i<num;i++)
	for(j=0;j<num-i;j++){
		if(c[j]<c[j+1]){
			t=c[j+1];
			c[j+1]=c[j];
			c[j]=t;
			strcpy(temp,d[j+1]);
			strcpy(d[j+1],d[j]);
			strcpy(d[j],temp);
		}
	}
	for(i=0;i<n;i++){
		if(b[i]<60){
			c[num]=b[i];
			strcpy(d[num],a[i]);
			num++;
		}
	}
	for(j=0;j<n;j++){
		my_printf("%s\n",d[j]);
	}

	return 0;
}

