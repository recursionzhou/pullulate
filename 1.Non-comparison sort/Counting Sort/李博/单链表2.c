#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node{
           int date;
           struct node * next;
}Link;

Link* InitList()
{
    Link *L;
    L=(Link*)malloc(sizeof(Link));
    L->next = NULL;
    return L;
}
//头插法创建链表1
void GreatList(Link * L)
{
    Link *p;
    int x,i;

    while(scanf("%d",&x)!=EOF)
    {
        p=(Link*)malloc(sizeof(Link));
        p->date = x;
        p->next = L->next;
        L->next =p;
    }

}
//头插法创建链表2
Link* GreatList_2(Link *L)
{

    Link *p;
    int x;
    L=(Link*)malloc(sizeof(Link));
    L->next=NULL;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%d",&x);
        p=(Link*)malloc(sizeof(Link));
        p->date = x;
        p->next = L->next;
        L->next =p;
    }
   return L;
}
//尾插法建表
void GreatList_r(Link*L)
{
    Link *s,*p;
    int x,i;
    L->next = NULL;
    s=L;
    while(scanf("%d",&x)!=EOF)
    {
        p=(Link*)malloc(sizeof(Link));
        p->date=x;
        s->next=p;
        s=p;
    }
    s->next=NULL;
}
//求线性表的长度
int  GetLengthList(Link*L)
{
    int i=0;
    Link *p;
    p=L->next;
    while(p!=NULL)
    {
        i++;
        p=p->next;
    }
    return i;
}
bool EmptyList(Link*L)
{
    if(L->next!=NULL)
    return false;
    else
        return true;
}
//求表中第i个元素
int GetElem(Link *L,int i)
{
    int j=0,x;
    Link*p=L->next;
    if(i<1||i>GetLengthList(L))
    {
        return -1;
    }
    while(j<i)
    {
        j++;
        p=p->next;
    }
    x=p->date;
    return x;
}
//按值查找
int Locate(Link *L,int x)
{
    Link *p;
    int i;
    p=L->next;
    for(i=0;i<GetLengthList(L)-1;i++)
    {
        if(p->date!=x)
            p=p->next;
        else
            break;
    }
    return (i+1);
}
//插入运算
int InsElem(Link *L,int i,int x)
{
    Link *p,*q;
    int j;
    p=L;
    if(i<0||i>GetLengthList(L)+1)
        return 0;
    else
    {
        for(j=0;j<i;j++)
            p=p->next;
        q=(Link*)malloc(sizeof(Link));
        q->date=x;
        q->next=p->next;
        p->next=q;

        return 1;
    }
}
int clear(Link *L)
{
    int j;
    Link *p,*q;
    p=L->next;
    for(j=0;p->next!=NULL; j++)
    {
        q=p->next;
        free(p);
        p=q;
    }
    L->next=p->next;
    return 0;
}
//删除节点
int DelElem(Link *L,int i)
{
    int j;
    Link *p,*q;
    p=L->next;
    if(i<1||i>GetLengthList(L));
        return -1;
    for(j=1;j<i;j++)
    {
        p=p->next;
    }
    q=p->next;
    p->next=q->next;
    free(q);
    return 1;
}
//销毁表
void DestroyList(Link*L)
{
    Link*p,*pre=L;
    p=L->next;
    while(p!=NULL)
    {
        free(pre);
        pre=p;
        p=pre->next;
    }
    free(pre);
}
//输出链表
void DispList(Link *L)
{
    Link *p;
    p=L->next;
    while(p!=NULL)
    {
        printf("%d ",p->date);
        p = p->next;
    }
     printf("\n");
}
int main()
{

    Link *L=NULL,*p;
    int  x,i;
    //头插法创建链表2
    /*L=GreatList_2();*/
    L=InitList();
//头插法创建链表1
 /*   GreatList(L);
    DispList(L);**/
//尾插法创建链表
    GreatList_r(L);
    DispList(L);
//求长度
    printf("%d\n",GetLengthList(L));
//判断
    bool b=EmptyList(L);
    printf("%d\n",b);
//头插入
    GreatList(L);
    DispList(L);
//插入一个数
    scanf("%d",&i);
    scanf("%d",&x);
    InsElem(L,i,x);
    DispList(L);

    clear(L);
    printf("%d\n",EmptyList(L));
    DestroyList(L);
    /*
//求表中第i个元素
    scanf("%d",&i);
    printf("%d",GetElem(L,i));
//按值查找
    scanf("%d",&x);

    printf("%d\n",Locate(L,x));
//删除节点
    scanf("%d",&i);
    DelElem(L,i);
    DispList(L);
//销毁表
    DestroyList(L);
    DispList(L);*/
    return 0;
}
