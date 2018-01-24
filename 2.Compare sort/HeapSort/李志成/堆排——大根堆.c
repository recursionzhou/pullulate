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
	left=2*i+1;//���ӽ���±�
	right=2*i+2;//���ӽ���±�
	parent=i;//���ڵ��±�

	while(left<=last){
	max=left;// �ȼ������ӽ��Ϊ���

		if (right<=last){  //�ж��ҽ���Ƿ���� ����ȡ���ֵ
			if (a[left]<a[right]){
				max=right;
			}

		}
		if (a[max]>a[parent]){//�ж�����ӽ���븸�ڵ�Ĵ�С
		swap(&a[max],&a[parent]);//�����ӽ���븸�ڵ��ֵ
			parent=max;//�����ڵ������
		}
		else{
			return;//������ڵ��������ӽڵ������
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
 	scanf ("%d",&a[i]);//����������ݲ�����������
 }
 for(i=n/2-1;i>=0;i--){
 	buidmaxheap(a,i,n-1);}//���������
	 swap(&a[0],&a[n-1]);
	 //�������飬ÿ��ȡһ�����ģ�Ȼ������ѣ�������������ѣ� 
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

