#define NUM_ITER 2696

#include <header.h>


int main_bench()
{
	int n,j,k[200][2],l;
	my_scanf("%d",&n);
	 int days[13] = { 0, 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 }, weekdays[7] = { 1, 2, 3, 4, 5,6,7};
    int y[200],m[200][2],w[200][2], i;
	for(l=0;l<n;l++)
	{
		my_scanf("%d",&y[l]);
	for(j=0;j<2;j++)
	{

    my_scanf("%d", &m[l][j]);
	w[l][j] = y[l]% 7 + y[l] / 4 - y[l] / 100 + y[l] / 400;
   for (i = 1; i < m[l][j]; i++)
        w[l][j] += days[i];
       w[l][j] += 1 - 1;
    if (((y[l] % 4 == 0 && y[l] % 100 != 0) || y[l] % 400 == 0) && (m[l][j] <= 2))
        w[l][j]--;
     k[l][j]=weekdays[w[l][j] % 7];
	}
	}
    for(l=0;l<n;l++)
	{
	 if(k[l][0]==k[l][1])
		 my_printf("YES\n");
	 else
		 my_printf("NO\n");
	}
    return 0;
}