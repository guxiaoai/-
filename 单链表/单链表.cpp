// 单链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
typedef struct LNode
{
    int date;
    LNode* Next;
}LNode, * LinkList;
bool InitList(LinkList &L) {
    L = (LinkList)malloc(sizeof(LNode));
    if (L == NULL) {
        return false;  //内存不足的情况
    }
    L->Next = NULL;
    return true;
}
bool HeadInsert(LinkList &L) {
    int j = 0000;
    std::cin >> j;
    while (j != 0000) {
        LNode* s = (LNode*)malloc(sizeof(LNode));
        s->date = j;
        s->Next = L->Next;
        L->Next = s;
        std::cin >> j;
    }
    return true;
}
bool TailInsert(LinkList &L) {
    int j = 0000;
    cin>>j;
    LNode* r;
    r = L;
    while (r->Next != NULL)
    {
        r = r->Next;
    }
    while (j!=0000)
    {
        
        LNode* s = new LNode;
        s->date = j;
        r->Next = s;
        r = s;
        s->Next = NULL;
        //s->date = j;
        //s->Next = NULL;
        //r->Next = s;
        cin >> j;
    }
    return true;
}
int PrintLinkList(LinkList L) {
    LNode* x = (LNode*)malloc(sizeof(LNode));
    if(L->Next != NULL)
    {
        x = L->Next;
        std::cout << x->date << std::endl;
        PrintLinkList(x);
    }
    else
    {
        free(x);
        return 9999;
    }
}
bool FindNode(LinkList L,int i) {
    int j = 1;
    LNode* p = L->Next;
    if (i == 0)
        return L;
    if (i < 1)
        return NULL;
    while (p&&j<i)
    {
        p = p->Next;
        j++;
    }
    return true;
}
int main()
{
    LinkList L;
    int num = 2;
    InitList(L);
    std::cout << "请输入正整数后确认\n";
    HeadInsert(L);
    std::cout << "请输入正整数后确认\n";
    TailInsert(L);
    PrintLinkList(L);
    std::cout << "Hello World!\n";
    if (FindNode(L,num)) {
        cout << "已经找到第"<<num<<endl;
        
    }
    else
    {
        cout << "没有找到" << num << endl;
    }
}