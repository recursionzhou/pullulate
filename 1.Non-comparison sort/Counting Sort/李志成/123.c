#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a[1001]={0},b[100];//������a[]��ʾͰ�ĸ�����������b[]�������������� 
	int n,i=0,j=0,x;
	scanf ("%d",&n); 
	for (i=0;i<n;i++){
		scanf ("%d",&x);//����n������������Ӧ��ľͰ��� 
		a[x]++;
	}
	for (i=0;i<1000;i++){
		while (a[i]!=0){//������ľͰ�����������������b[]�� 
			b[j++]=i;
			a[i]--;
		}	
	}	
	for (i=0;i<j;i++){
		printf ("%d",b[i]);//�������������b[] 
	}
	return 0; 
} 
