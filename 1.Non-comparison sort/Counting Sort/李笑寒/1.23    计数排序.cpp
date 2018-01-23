#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;				 //n还是数据范围
	int a[n];				 //开最大数那么多的桶
	int shu[5];				 //还排5个数
	memset(a, 0, sizeof(a)); //n未知，这样初始化数组
	for (int i = 0; i < 5; i++)
	{
		cin >> shu[i];
		++a[shu[i]];
	}
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		while (a[i]--)
		{
			cout << i << ' ';
		}
	}
	return 0;
}