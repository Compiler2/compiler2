#define NUM_ITER 3024

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);int m;float a[100];int b[100][100];int c[100][100];


for(int d=0;d<n;d++)
{a[d]=3.5000000;}

for(int i=0;i<n;i++){
my_scanf("%d",&m);
  for(int j=0;j<m;j++)
  {
	  if(j==0){b[i][j]=2;}
	  if(j==1){b[i][j]=3;}
	  if(j>=2){b[i][j]=b[i][j-1]+b[i][j-2];}
      if(m!=1&&j>1){a[i]+=1.0000*b[i][j]/b[i][j-1];}
	  if(m==1){a[i]=2.0000000;}

  }

}

for(int o=0;o<n;o++)
{
my_printf("%.3f\n",a[o]);

}


return 0;
}