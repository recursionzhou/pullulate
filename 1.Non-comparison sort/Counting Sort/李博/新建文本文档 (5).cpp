#include<iostream>  
#include<iomanip>  
#include <iostream>  
#include <stdio.h>  
#include <string.h>  
#include <list>  
using namespace std;  
  
  
void CountSort(int a[], int n)//C��С���ڵ�����������c��ֵΪ1000,�������Ҳ��1000����  
{  
    int b[1000] = { 0 };  
    int c[1000] = { 0 };  
  
    for (int i = 0; i < n; i++)  
    {  
        int ai = a[i];  
        c[ai] = c[ai] + 1;  
    }  
  
    for (int i = 1; i < 1000; i++)  
    {  
        c[i] = c[i] + c[i - 1];  
    }  
  
    for (int i = 0; i < n; i++)  
    {  
        b[c[a[i]]-1] = a[i];//ע���±�  
        c[a[i]]--;  
    }  
  
    for (int i = 0; i < n; i++)  
    {  
        cout << b[i] << " ";  
    }  
}  
  
//���������ʵ��  
int main()  
{  
    int a[8] = {2,5,3,0,2,3,0,3};  
    CountSort(a,8);   
    return 0;  
}
