#define NUM_ITER 87

#include <header.h>


int main_bench()
{
	int a[100][100],b[100][100],j,q,k,i,n,m,row,col;
	my_scanf("%d %d",&row,&col);
              
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
         my_scanf("%d",&a[i][j]);
		}
	}
	
	
	if(row>=col)
	{
		if(col%2==0){
      k=col/2;
	  for(q=1;q<=k;q++){
			
i=0;
for(j=0;j<col-1;j++)     
my_printf("%d\n",a[i][j]);

j=col-1;
for(i=0;i<row-1;i++)
my_printf("%d\n",a[i][j]);

i=row-1;
for(j=col-1;j>0;j--)     
my_printf("%d\n",a[i][j]);

j=0;
for(i=row-1;i>0;i--)
my_printf("%d\n",a[i][j]); 
	  
	  	  
	  for(i=1,n=0;i<row-1;i++,n++){
		for(j=1,m=0;j<col-1;j++,m++){
         b[n][m]=a[i][j];
		}
	  }
		 for(i=0;i<row;i++){
		for(j=0;j<col;j++){
        a[i][j]=b[i][j];
		}
	}

col=col-2;
row=row-2;
	  }
		}

		else
		{
		
		k=col/2;
		for(q=1;q<=k;q++){
			
i=0;
for(j=0;j<col-1;j++)     
my_printf("%d\n",a[i][j]);

j=col-1;
for(i=0;i<row-1;i++)
my_printf("%d\n",a[i][j]);

i=row-1;
for(j=col-1;j>0;j--)     
my_printf("%d\n",a[i][j]);

j=0;
for(i=row-1;i>0;i--)
my_printf("%d\n",a[i][j]);  
	  
	  	  
	  for(i=1,n=0;i<row-1;i++,n++){
		for(j=1,m=0;j<col-1;j++,m++){
         b[n][m]=a[i][j];
		}
	  }
		 for(i=0;i<row;i++){
		for(j=0;j<col;j++){
        a[i][j]=b[i][j];
		}
	}

col=col-2;
row=row-2;
		}
		for(i=0;i<row;i++)
           my_printf("%d\n",a[i][0]) ;
		}
	}


	else
{
		if(row%2==0){
      k=row/2;
	  for(q=1;q<=k;q++){
			
i=0;
for(j=0;j<col-1;j++)     
my_printf("%d\n",a[i][j]);

j=col-1;
for(i=0;i<row-1;i++)
my_printf("%d\n",a[i][j]);

i=row-1;
for(j=col-1;j>0;j--)     
my_printf("%d\n",a[i][j]);

j=0;
for(i=row-1;i>0;i--)
my_printf("%d\n",a[i][j]); 
	  
	  	  
	  for(i=1,n=0;i<row-1;i++,n++){
		for(j=1,m=0;j<col-1;j++,m++){
         b[n][m]=a[i][j];
		}
	  }
		 for(i=0;i<row;i++){
		for(j=0;j<col;j++){
        a[i][j]=b[i][j];
		}
	}

col=col-2;
row=row-2;
	  }
		}

		else
		{
		
		k=row/2;
		for(q=1;q<=k;q++){
			
i=0;
for(j=0;j<col-1;j++)     
my_printf("%d\n",a[i][j]);

j=col-1;
for(i=0;i<row-1;i++)
my_printf("%d\n",a[i][j]);

i=row-1;
for(j=col-1;j>0;j--)     
my_printf("%d\n",a[i][j]);

j=0;
for(i=row-1;i>0;i--)
my_printf("%d\n",a[i][j]);
	  
	  	  
	  for(i=1,n=0;i<row-1;i++,n++){
		for(j=1,m=0;j<col-1;j++,m++){
         b[n][m]=a[i][j];
		}
	  }
		 for(i=0;i<row;i++){
		for(j=0;j<col;j++){
        a[i][j]=b[i][j];
		}
	}

col=col-2;
row=row-2;
		}
		for(j=0;j<col;j++)
           my_printf("%d\n",a[0][j]) ;
		}
	}
		 
		 
		 return 0;
}


