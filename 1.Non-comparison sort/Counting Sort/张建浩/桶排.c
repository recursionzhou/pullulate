#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[1001];
	int i , j , k , n;
	for(i=0;i<=1000;i++)
	{
		a[i]=0;    // ��ʼ��Ϊ0 
	}
	scanf("%d",&n); // ��ʾ��n����Ҫ�Ƚ� 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);  //��ÿ�����������k�� 
		a[k]++;          // ����һ���� ��Ӧ�ı��Ϊk��+1 
	}
	for(i=1000;i>=0;i--)      // �����ж� 1000~0��Ͱ 
		for(j=1;j<=a[i];j++)  //  ���ּ��ξʹ�ӡ����Ͱ�ı�� 
			printf("%d ",i);
			printf("\n"); 
	return 0;
}
