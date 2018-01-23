//有负数不能用桶排
//十进制下开了十个桶，同理，二进制判断01就行

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n; //n为数据范围最大值
	int a[5]; //就排5个试试
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	queue<int> tong[10]; //因为先进先出符合队列，所以桶直接开成队列形式
	for (int k = 1; k <= n; k *= 10)
	{
		for (int i = 0; i < 5; i++)
		{
			tong[a[i] / k % 10].push(a[i]);
		}
		int j = 0;
		for (int i = 0; i < 10; i++)
		{
			while (tong[i].size())
			{
				a[j++] = tong[i].front();
				tong[i].pop();
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << ' ';
	}
}