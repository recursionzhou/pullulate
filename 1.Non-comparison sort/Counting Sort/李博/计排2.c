#include<stdio.h>
#include<stdlib.h>

void CountSort(int *a,int n)
{
    int i,j,count,*b;
    
    b=(int*)malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++)//��ʼ��data_p
        b[i]=0;
        
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)//ɨ�����������
            if(a[j]<a[i])//ͳ�Ʊ�a[i]ֵС��ֵ�ĸ���
                count++;
        if(b[count]!=0)//������ȷ�0�����ݣ�Ӧ����һλ������Ϊ0ʱ��������data_p����ʼ��Ϊ0���ʲ���Ӱ�졣
            count++;
        b[count]=a[i];//��ŵ�data_p�еĶ�Ӧλ��
    }
        //���ڼ�鵱�ж������ͬʱ�����
    i=0,j=n;
    int temp;
    while(i<j)
    {
        if(b[i]==0)
        {
            temp=i-1;
            b[i]=b[temp];
        }
        i++;
    }
    for(i=0;i<n;i++)//������������ݸ��Ƶ�a��
        a[i]=b[i];
    free(b);//�ͷ�b
}
void main()
{
    int i,a[999]={0};
    for(i=0;i<10;i++)
        a[i]=rand()%1000;
    CountSort(a,10);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
}
 


