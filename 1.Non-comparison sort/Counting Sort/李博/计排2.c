#include<stdio.h>
#include<stdlib.h>

void CountSort(int *a,int n)
{
    int i,j,count,*b;
    
    b=(int*)malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++)//初始化data_p
        b[i]=0;
        
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)//扫描待排序数组
            if(a[j]<a[i])//统计比a[i]值小的值的个数
                count++;
        if(b[count]!=0)//对于相等非0的数据，应向后措一位。数据为0时，因数组data_p被初始化为0，故不受影响。
            count++;
        b[count]=a[i];//存放到data_p中的对应位置
    }
        //用于检查当有多个数相同时的情况
    i=0,j=n;
    int temp;
    while(i<j)
    {
        if(b[i]==0)
        {
            temp=i-1;
            b[i]=b[temp];
        }
        i++;
    }
    for(i=0;i<n;i++)//把排序完的数据复制到a中
        a[i]=b[i];
    free(b);//释放b
}
void main()
{
    int i,a[999]={0};
    for(i=0;i<10;i++)
        a[i]=rand()%1000;
    CountSort(a,10);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
}
 


