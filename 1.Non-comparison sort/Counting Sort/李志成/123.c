#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a[1001]={0},b[100];//开数组a[]表示桶的个数，开数组b[]保存排序后的数据 
	int n,i=0,j=0,x;
	scanf ("%d",&n); 
	for (i=0;i<n;i++){
		scanf ("%d",&x);//读入n个数，并给相应的木桶标记 
		a[x]++;
	}
	for (i=0;i<1000;i++){
		while (a[i]!=0){//对所有木桶遍历按数序存入数组b[]中 
			b[j++]=i;
			a[i]--;
		}	
	}	
	for (i=0;i<j;i++){
		printf ("%d",b[i]);//输出排序后的数组b[] 
	}
	return 0; 
} 
