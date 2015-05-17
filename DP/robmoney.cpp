#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b)  (a>b)?(a):(b)
int robmoney(int a[],int N)
{
	int i,*f;
	f=(int*)malloc(sizeof(int)*N);
	f[0]=a[0];
	f[1]=MAX(f[0],f[1]);
	for(i=2;i<N;i++)
		f[i]=MAX(f[i-1],f[i-2]+a[i]);
     return f[N-1];
	 free(f);
}
int main()
{
	int a[7]={10,12,18,27,19,3,22};
	int maxmoney;
	maxmoney=robmoney(a,7);
	printf("%d\n",maxmoney);
	return 0;

}