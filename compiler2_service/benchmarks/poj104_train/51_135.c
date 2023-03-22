#define NUM_ITER 811059

#include <header.h>


int main_bench()
{
   int n,total;
   char in[550];
   char sp[510][500];
   my_scanf("%d%s",&n,in);
    int i,j,k;
	total=strlen(in)-n+1;
	for(i=0;i<total;i++)
	{
		for(k=0;k<n;k++){sp[i][k]=in[i+k];}
		sp[i][k]=0;
	}
	
	int flag[510]={0},count[510]={0};
   for(i=0;i<total;i++)
   {
      for(j=i;j<total;j++)
		  if(flag[j]==0)
		  {
            if(strcmp(sp[i],sp[j])==0)
			{ 
		       flag[j]=1;count[i]++;
			} 
		  }
   }
   int max;
   max=count[0];
   for(i=0;i<total;i++)
   {
     if(count[i]>max)max=count[i];
   }
   if(max!=1)
   {
   my_printf("%d\n",max);
   for(i=0;i<total;i++)
   {
     if(count[i]==max)my_printf("%s\n",sp[i]);
   }
   }
   else my_printf("NO\n");
}