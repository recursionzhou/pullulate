#include <stdio.h>
#include <stdlib.h>
void countsort(int *a,int n) // ����ֵ��0-1000��10��������
{
    int b[999]={0};
    int c[999]={0};
    int i,j;

    for(i=0;i<n;i++)   //ͳ��ÿ���ǳ��ֵĴ���
    {
        j=a[i];
        c[j]++;
    }

    for ( i = 1; i <= 1000 ; i++)  //ͳ�������б�xС�ĸ���
    {
        c[i] = c[i] + c[i - 1];
    }

    for(i=0;i<n;i++)  // ����
    {
        b[c[a[i]]-1]=a[i]; // ע���±꣬����С�ڵ���2����������4�ξͰ�2���벻b[3]�У��±��0��ʼ
        c[a[i]]--;        //����һ�����ͼ���һ��
    }
    for(i = 0;i < n ;i++)
        printf("%d ",b[i]);
}
int main()
{
	int i;
    int a[999]={0};
    for(i=0;i<10;i++)
    {
        a[i]=rand()%(1000);
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");

    countsort(a,10);
    return 0;
}
