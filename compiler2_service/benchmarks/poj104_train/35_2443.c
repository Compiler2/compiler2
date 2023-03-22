#define NUM_ITER 82

#include <header.h>

 int main_bench()
 {
    int i,j,l,h,m,n,sz[50][50],flaga=0,flagb=0,flagc=0;
    my_scanf("%d,%d",&m,&n);
     for(i=0;i<m;i++)
       for(j=0;j<n;j++)
         my_scanf("%d",&sz[i][j]);
        
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
       {
        {for(l=0;l<n;l++)
          if(sz[i][j]<sz[i][l]) flaga++;
        for(h=0;h<m;h++)
          if(sz[i][j]>sz[h][j]) flagb++;}
        if(flaga==0&&flagb==0) 
           {my_printf("%d+%d",i,j);flagc=1;break;}
          flaga=0;flagb=0;
       }
    if(flagc==0) my_printf("No");
    
    return 0;
        
 }

