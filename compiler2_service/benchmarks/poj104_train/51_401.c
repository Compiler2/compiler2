#define NUM_ITER 798678

#include <header.h>

int main_bench()
{  int max=0,temp=1,i,j,k=0,len,n;
char total[600],a[500][6]={'\0'},tall[20][6]={'\0'};
   my_scanf("%d",&n);getchar();
   gets(total);
   len=strlen(total);
   for(i=0;i<len-n+1;i++)
	   for(j=0;j<n;j++)
		   a[i][j]=total[i+j]; 
   for(i=0;i<len-n+1;i++)
   {for(j=i+1;j<len-n+1;j++)
   if(strcmp(a[i],a[j])==0) temp++;if(temp>max) max=temp;temp=1;}
     for(i=0;i<len-n+1;i++)
   {for(j=i+1;j<len-n+1;j++)
   if(strcmp(a[i],a[j])==0) temp++;if(temp==max) strcpy(tall[k],a[i]),k++;temp=1;}
	if(max==1) my_printf("NO");
else{ my_printf("%d\n",max);
	 for(i=0;i<k;i++)
		 puts(tall[i]);}
	 return 0;
}