#include <stdio.h>
 int a[101],n;//����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ��  
void quicksort(int left,int right) {    
 int i,j,t,temp;    
  if(left>right)       
   return;            
    temp=a[left]; //temp�д�ľ��ǻ�׼��     
	 i=left;//�ڱ�i    
	 j=right;   //�ڱ�j 
	   while(i!=j)   
	     {         //���ڱ���ʼ̽��         
		  while(a[j]>=temp && i<j)             
		  j--;         //��������̽��          
		  while(a[i]<=temp && i<j)             
		  i++; //��������̽��          
		 if(i<j)//���ڱ�i���ڱ�jû������ʱ ����a[i]��a[j]��ֵ       
		   {   t=a[i];     
		    a[i]=a[j];             
			a[j]=t;    }    
			 }     //i==j ʱ�ս���׼����λ  
    a[left]=a[i];   
	a[i]=temp;          
	quicksort(left,i-1);//����������ߵģ�������һ���ݹ�Ĺ���      
	quicksort(i+1,right);//���������ұߵģ�������һ���ݹ�Ĺ���  } 
int main() {    
      int i,j,t;     //��������      
	  scanf("%d",&n);    
	   for(i=1;i<=n;i++)        
	    scanf("%d",&a[i]); 
         quicksort(1,n); //�ֱ���������˵������Ҷ˵�������           
		 for(i=1;i<=n;i++)     //��������Ľ��   
		   printf("%d ",a[i]); 
       return 0;
	    } 
