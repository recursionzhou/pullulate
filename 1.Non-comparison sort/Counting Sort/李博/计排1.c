#include <stdio.h>
#include <stdlib.h>
void countsort(int *a,int n) // 对数值在0-1000的10个数排序
{
    int b[999]={0};
    int c[999]={0};
    int i,j;

    for(i=0;i<n;i++)   //统计每个是出现的次数
    {
        j=a[i];
        c[j]++;
    }

    for ( i = 1; i <= 1000 ; i++)  //统计数组中比x小的个数
    {
        c[i] = c[i] + c[i - 1];
    }

    for(i=0;i<n;i++)  // 排序
    {
        b[c[a[i]]-1]=a[i]; // 注意下标，比如小于等于2的数出现了4次就把2放入不b[3]中，下标从0开始
        c[a[i]]--;        //放入一个数就减少一个
    }
    for(i = 0;i < n ;i++)
        printf("%d ",b[i]);
}
int main()
{
	int i;
    int a[999]={0};
    for(i=0;i<10;i++)
    {
        a[i]=rand()%(1000);
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");

    countsort(a,10);
    return 0;
}
