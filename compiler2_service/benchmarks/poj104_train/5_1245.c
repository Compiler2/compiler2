#define NUM_ITER 920063

#include <header.h>

int main_bench(){
	int i,len,sum=0,e=0;
	float n;
	my_scanf("%f",&n);
	char a[600],b[600];
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	len = strlen(a);
	if(strlen(a)!=strlen(b)) my_printf("error");
	else{
		for(i=0;i<len;i++){
			if(a[i]!=65 && a[i]!=71 && a[i]!=67 && a[i]!=84){my_printf("error");
            e=1;
			break;}
			if(b[i]!=65 && b[i]!=71 && b[i]!=67 && b[i]!=84){my_printf("error");
            e=1;
			break;
			}
		}
		if (e==0){
			for(i=0;i<len;i++)
			{if(a[i]==b[i]) sum++;
			}
			if (sum*1.0/len>n) {
			my_printf("yes");}
			else my_printf("no");
		}
	}

return 0;
}
