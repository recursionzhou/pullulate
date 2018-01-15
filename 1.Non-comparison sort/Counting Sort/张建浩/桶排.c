#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[1001];
	int i , j , k , n;
	for(i=0;i<=1000;i++)
	{
		a[i]=0;    // 初始化为0 
	}
	scanf("%d",&n); // 表示有n个数要比较 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);  //把每个数读入变量k中 
		a[k]++;          // 读入一个数 对应的编号为k的+1 
	}
	for(i=1000;i>=0;i--)      // 依次判断 1000~0的桶 
		for(j=1;j<=a[i];j++)  //  出现几次就打印几次桶的编号 
			printf("%d ",i);
			printf("\n"); 
	return 0;
}
