#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
 int a[100],i,j,t,n;     
     scanf("%d",&n);             //输入一个数n,表示接下来有n个数   
      for(i=1;i<=n;i++)  //循环读入n个数到数组a[]中         
     scanf("%d",&a[i]);     
    for(i=1;i<=n-1;i++) //n个数排序，只用进行n-1趟     
    {    for(j=1;j<=n-i;j++) //从第1位开始比较直到第n-i位停止（即n-i和n-i+1进行比较后停止） 每循环i趟就有从后数第i个位置确定，所以要n-i        
     {      if(a[j]<a[j+1]) //比较大小并交换           
     {  t=a[j]; 
	 a[j]=a[j+1]; 
	 a[j+1]=t;  }        
	  }   
	    }   
   for(i=1;i<=n;i++)  //输出结果       
   printf("%d ",a[i]);         
    return 0;  
}
