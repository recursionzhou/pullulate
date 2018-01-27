//虽然嫌麻烦但是还是写成了左闭右开区间

#include <iostream>

using namespace std;

void _qsort(int *head, int *tail) //给出头指针尾后指针
{
	if (tail - head < 2) //如果该排序的数组元素只剩一个或没有的话，递归结束
	{
		return;
	}
	int end = tail - head - 1; //需要排序的数组首元素下标为0，尾元素下标为end
	int base = head[0];		   //基准值设为首元素,由余head指到的空间如下一直在变，所以此句成立
	int *_head = head;		   //存下当前首地址
	int *_tail = tail;
	tail = tail - 1;
	while (1)
	{
		while (head < tail && (*head <= base || *tail >= base)) //如果找不到比基准小的，他会一直--，所以每次循环都保证head<tail
		{
			if (*tail >= base && head < tail)
			{
				tail--;
			}
			else if (*head <= base && head < tail)
			{
				head++;
			}
			else
			{
				break;
			}
		}
		if (tail != head)
		{
			int t = *head;
			*head = *tail;
			*tail = t;
		}
		else
		{
			int n = *head;
			*head = base;
			*_head = n;
			break;
		}
	}
	_qsort(_head, head);
	_qsort(head + 1, _tail);
}

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	_qsort(a, a + 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';
	}
	return 0;
}