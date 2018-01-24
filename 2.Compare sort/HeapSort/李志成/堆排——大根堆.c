#include<stdio.h>
#include<string.h>
void swap(int *a,int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
void buidmaxheap(int a[],int i,int last){
	int left ,right,parent,max;
	left=2*i+1;//左子结点下标
	right=2*i+2;//右子结点下标
	parent=i;//父节点下标

	while(left<=last){
	max=left;// 先假设左子结点为最大

		if (right<=last){  //判断右结点是否存在 ，并取最大值
			if (a[left]<a[right]){
				max=right;
			}

		}
		if (a[max]>a[parent]){//判断最大子结点与父节点的大小
		swap(&a[max],&a[parent]);//交换子结点与父节点的值
			parent=max;//将父节点的下移
		}
		else{
			return;//如果父节点大于最大子节点则结束
		}
		left=2*parent+1;
		right=2*parent+2;
	}
}

int main()
{
 int a[100];
 int i,n,unsort;
scanf ("%d",&n);
 for(i=0;i<n;i++){
 	scanf ("%d",&a[i]);//输入测试数据并存入数组内
 }
 for(i=n/2-1;i>=0;i--){
 	buidmaxheap(a,i,n-1);}//建立大根堆
	 swap(&a[0],&a[n-1]);
	 //遍历数组，每次取一个最大的，然后调整堆（即出堆与调整堆） 
 	for (unsort=n-1;unsort>0;unsort--){
    buidmaxheap(a,0,unsort-1);
    swap(&a[0],&a[unsort-1]);
}
for(i=0;i<n;i++){
	printf("%d ",a[i]);
}
printf("\n");
    return 0;
}

