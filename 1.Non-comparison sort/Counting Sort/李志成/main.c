#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int a[100]={0}, b[100]={0}, c[1000]={0};//数组a[]用来存放原始数据  数组c[]用来临时记录c[a[i]]出现的次数和记录等于和下小于c[i]的个数  数组b[]保存和输出数据
    int i=0,n,max,min;
    scanf ("%d%d",&n,&max);//输入数据的个数和测试数据中的最大值
    for(i=0;i<n;i++){
        scanf ("%d",&a[i]);//输入n个测试数据
        c[a[i]]++;//用临时数组记录每一个测试数值的个数
    }
    for (i=1;i<max;i++){
        c[i]=c[i]+c[i-1];//统计等于和小于c[i]的个数确定a[i]在b[]的位置
   }
    for (i=n-1;i>=0;i--){
        b[c[a[i]]]=a[i];//循环将a[i]按确定位置存进b[]中
        c[a[i]]--;//保证重复出现的值按出现次数继续存入
    }
    for (i=1;i<=n;i++){
        printf ("%d",b[i]);
    }
	return 0;
}









