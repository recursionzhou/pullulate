#include<stdio.h>
main()
{
	int a[9999]={0};			//定义数组为9999，因为数组的上线必须比数据的最大值大 否则无法表示数据 。 
	int t,i,j;
	for(i=0;i<10;i++)			//每次读入的数据赋值给t，把t对应的变量a【t】加1 来表示数据t出现的次数。 
	{
		scanf("%d",&t);
		a[t]++;	
	}	
	for(i=0;i<9999;i++)  			//对数组a每一个变量进行遍历 。 
	{ 
		for(j=0;a[i]>j;j++)		//如果a【i】为0，则表示没有数据复制给a【i】，也就是说读取时没有i这个数据。 
		{				//如果a【i】为1，表示出现一次。否则表示a【i】出现多次，进行循环，每循环一次打印一遍 。 
			printf("%d ",i); 
		}
	}
	printf("\n");
} 
						//核心思想  对读取的数据对应在数组的变量进行赋值  如读取t=10，则a【t（10）】=1，表示10出现了一次
						//需注意数组上限不能太小 否则数组越界 
