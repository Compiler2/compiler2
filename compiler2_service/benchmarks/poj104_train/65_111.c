#include <header.h>

int main_bench(){
	int n,a,b,A=0,B=0,tile=0,i;
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		if (((a==0)&&(b==0))||((a==1)&&(b==1))||((a==2)&&(b==2)))
			tile+=1;
		else if (((a==0)&&(b==1))||((a==1)&&(b==2))||((a==2)&&(b==0)))
			A+=1;
		else B+=1;
    }
	if ((A==B)||(tile==n)) my_printf("Tie");
	else if (A>B) my_printf("A");
	else my_printf("B");
	return 0;
}