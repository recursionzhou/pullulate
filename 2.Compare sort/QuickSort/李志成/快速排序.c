#include <stdio.h>
 int a[101],n;//定义全局变量，这两个变量需要在子函数中使用  
void quicksort(int left,int right) {    
 int i,j,t,temp;    
  if(left>right)       
   return;            
    temp=a[left]; //temp中存的就是基准数     
	 i=left;//哨兵i    
	 j=right;   //哨兵j 
	   while(i!=j)   
	     {         //俩哨兵开始探测         
		  while(a[j]>=temp && i<j)             
		  j--;         //从左向右探测          
		  while(a[i]<=temp && i<j)             
		  i++; //从右向左探测          
		 if(i<j)//当哨兵i和哨兵j没有相遇时 交换a[i]与a[j]的值       
		   {   t=a[i];     
		    a[i]=a[j];             
			a[j]=t;    }    
			 }     //i==j 时终将基准数归位  
    a[left]=a[i];   
	a[i]=temp;          
	quicksort(left,i-1);//继续处理左边的，这里是一个递归的过程      
	quicksort(i+1,right);//继续处理右边的，这里是一个递归的过程  } 
int main() {    
      int i,j,t;     //读入数据      
	  scanf("%d",&n);    
	   for(i=1;i<=n;i++)        
	    scanf("%d",&a[i]); 
         quicksort(1,n); //分别输入最左端的与最右端的下坐标           
		 for(i=1;i<=n;i++)     //输出排序后的结果   
		   printf("%d ",a[i]); 
       return 0;
	    } 
