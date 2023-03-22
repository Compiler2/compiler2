#include <header.h>

int main_bench(){	
    int n,m,i,j=0,k,nomean,time1,time2,T1,T2,T;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&m);
        time2=0;
        T1=0;
        T2=0;
        j=0;
        if(m!=0)
        {                                  
                do{
                         time1=time2;
                         T1=T2;
                         my_scanf("%d",&T2);
                         j++;
                         time2=T2+j*3;            
                  }while(j<m && time2<60);
   
        }
        if((m-j)!=0)
        {
            for(k=0;k<m-j;k++)
              my_scanf("%d", &nomean);   
        }
        if(time2<=60)
           T=60-3*m;
        else if(time2<=63)
           T=T2;
             else
              T=T1+(60-time1);
         my_printf("%d\n",T);                
    }
    return 0;
}