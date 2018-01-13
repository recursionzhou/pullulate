#include<iostream>  
#include<iomanip>  
#include <iostream>  
#include <stdio.h>  
#include <string.h>  
#include <list>  
using namespace std;  
  
  
void CountSort(int a[], int n)//C大小以内的数排序，这里c的值为1000,数组个数也在1000以内  
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
        b[c[a[i]]-1] = a[i];//注意下标  
        c[a[i]]--;  
    }  
  
    for (int i = 0; i < n; i++)  
    {  
        cout << b[i] << " ";  
    }  
}  
  
//计算排序的实现  
int main()  
{  
    int a[8] = {2,5,3,0,2,3,0,3};  
    CountSort(a,8);   
    return 0;  
}
