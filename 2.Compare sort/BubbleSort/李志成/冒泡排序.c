#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
 int a[100],i,j,t,n;     
     scanf("%d",&n);             //����һ����n,��ʾ��������n����   
      for(i=1;i<=n;i++)  //ѭ������n����������a[]��         
     scanf("%d",&a[i]);     
    for(i=1;i<=n-1;i++) //n��������ֻ�ý���n-1��     
    {    for(j=1;j<=n-i;j++) //�ӵ�1λ��ʼ�Ƚ�ֱ����n-iλֹͣ����n-i��n-i+1���бȽϺ�ֹͣ�� ÿѭ��i�˾��дӺ�����i��λ��ȷ��������Ҫn-i        
     {      if(a[j]<a[j+1]) //�Ƚϴ�С������           
     {  t=a[j]; 
	 a[j]=a[j+1]; 
	 a[j+1]=t;  }        
	  }   
	    }   
   for(i=1;i<=n;i++)  //������       
   printf("%d ",a[i]);         
    return 0;  
}
