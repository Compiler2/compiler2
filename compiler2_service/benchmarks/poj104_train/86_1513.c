#define NUM_ITER 1266

#include <header.h>




int n,i,sz[10000][30],a[10000],b[10000],l=0,k;

int main_bench()
 
{

   my_scanf("%d",&n);

    for(i=0;i<n;i++)

      for(l=0;l<21;l++)  sz[i][l]=-1;

       

   l=0;

   for(i=0;i<n;i++)

   {

      my_scanf("%d",&b[i]);

      sz[i][0]=b[i];
 
      for(l=0;l<b[i];l++)  my_scanf("%d",&(sz[i][l+1]));

   }

   

   for(i=0;i<n;i++)

   {

      

      l=1;
 
      if(sz[i][0]==0)

      {

       a[i]=60;

       continue;

      }

      while(sz[i][l]!=-1)

      {

       k=sz[i][l]+3*l;

       if(k<60&&(sz[i][l+1]==-1))
 
       {

        a[i]=60-3*l;

        break;

       }

       else if(k<60&&(sz[i][l+1]!=-1)) l++;

       else if((k>=60)&&(k<=63))

        {

        a[i]=sz[i][l];

        break;

       }

       else if(k>63)

       {

        a[i]=60-3*(l-1);

        break;

       }
 
      }

  }

for(i=0;i<n;i++)

 my_printf("%d\n",a[i]);

 return 0;

}










 