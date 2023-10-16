// 单链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

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
LinkList InsertNode(LinkList &L) {
    int j = 9999;
    std::cin >> j;
    while (j != 9999) {
        LNode* s = (LNode*)malloc(sizeof(LNode));
        s->date = j;
        s->Next = L->Next;
        L->Next = s;
        std::cin >> j;
    }
    return L;
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
        return 9999;
    }
}
int main()
{
    LinkList L;
    InitList(L);
    std::cout << "请输入正整数后确认\n";
    InsertNode(L);
    PrintLinkList(L);
    std::cout << "Hello World!\n";
}