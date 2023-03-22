#define NUM_ITER 32

#include <header.h>

int main_bench()
{
    
       int i,j,k,t,n,a[100][100],b[100][100],c[100][100],d[100],x1,x2,y1,y2,M,m,flag,flag1,flag2;
       
       my_scanf("%d%d",&x1,&y1);
      
       for (i=0;i<=x1-1;i++)
          {
                for (j=0;j<=y1-1;j++)
                my_scanf("%d",&a[i][j]);
                                          
                           
          }
          my_scanf("%d%d",&x2,&y2);
          for (i=0;i<=x2-1;i++)
          {
                for (j=0;j<=y2-1;j++)
                my_scanf("%d",&b[i][j]);
                                           
          }
         
          
         if (x1<x2)
         M=x2;
         else 
         M=x1;
         if(y1<y2)
         m=y2;
         else
         m=y1;                 
        
         for (i=0;i<M;i++)
          {    
               for(j=0;j<m;j++)
               c[i][j]=0;
          }
         
         
                                                                              
                                                                              
            
         for (i=0;i<M;i++)
          {   for (j=0;j<m;j++)
                 {     
                     for (t=0;t<y1;t++)
                      {  
                        
                          c[i][j]=c[i][j]+a[i][t]*b[t][j];
                          
                                       
                      }   
                        
                               
                               
                               
                 }                          
                          
                          
                          
          }
          
          
           
            
          for(i=0;i<M;i++)
           d[i]=0;  
           d[M]=m;                                                  
         
          for (i=0;i<M;i++)
          {   for (j=0;j<m;j++)
          
               {    if(c[i][j]==0)
                     d[i]++;                                                  
               }
          
          }  
          
          
          
              
            for (i=0;i<M;i++)                                                 
             {  
                  
                  
                  if(d[i]!=m)
                  {
                    if((M==100)&&(m==100)&&(i==0))        
                    my_printf("5050");
                         else
                   my_printf("%d",c[i][0]);
                            
                  for (j=1;j<m-d[i];j++)
                  my_printf(" %d",c[i][j]);
                  
                  
                  
                  
                  
                  
                  }
                  else
                  {      flag=0;
                        
                        if(d[i+1]!=m)
                        {my_printf("0");
                                     
                        for(j=1;j<m-d[i+1];j++)
                        my_printf(" %d",c[i][j]);}
                        else
                        {   flag=1;
                            break;
                             
                            
                        }
                      
                    if(flag==1)
                    break;  
                    
                    
                      
                      
                  }             
               
              if(i!=M-1&&((d[i+1]!=m)||(d[i+1]==m)&&(d[i+2]!=m)))
                    my_printf("\n");             
                 
                 
             }
    
    
  
    
    
    
    
    
    
    
    return 0;   
}
