#define NUM_ITER 13063

#include <header.h>

int main_bench()
{
	int n,i,b[200],c,e,k,a[13],y;
	my_scanf("%d",&n);
	a[0]=a[1]=0;
	a[5]=a[7]=a[10]=a[12]=30;
    a[2]=a[4]=a[6]=a[8]=a[9]=a[11]=31;
	a[3]=28;
	for(k=3;k<=12;k++){
	             a[k]+=a[k-1];
			 }
	
	for(i=0;i<n;i++){
	     my_scanf("%d",&y);
		 if((y%4==0&&y%100!=0)||y%400==0){
             for(k=3;k<13;k++){
				 a[k]+=1;
			 }
		 }
		 my_scanf("%d%d",&c,&e);
		 if(c<e){
			 int t;
			 t=c;
			 c=e;
			 e=t;
		 }
		 if((a[c]-a[e])%7==0)
            b[i]=0;
		 else b[i]=1;
         if((y%4==0&&y%100!=0)||y%400==0){
             for(k=3;k<13;k++){
				 a[k]-=1;
			 }
		 }
		 }

     for(i=0;i<n;i++){
	     if(b[i]==0)
		my_printf("YES\n");
		 else my_printf("NO\n");
	 }
	return 0;
}