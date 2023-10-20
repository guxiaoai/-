#include <iostream>
#define InitSize 10
#define Maxsize 10
using namespace std;
typedef struct SqList//静态分配 
{
	int data[Maxsize];
	int lenth;

}SqList;
void InitSqList(SqList &L) {//初始化静态表
	int i = 0;
	for (i = 0; i < Maxsize; i++) {
		L.data[i] = 0;
	}
	L.lenth = 0;
}
bool InsertSqList(SqList& L,int x,int e) {//静态表插入
	if (L.lenth = Maxsize) {
		cout << "顺序表已满，不能插入\n";
		return false;
	}
	int i = L.lenth;
	for (i;i >= x;--i) {
		L.data[i] = L.data[i - 1];
	}
	L.data[x - 1] = e;
	L.lenth = L.lenth + 1;
	return true;
}
bool DeleteSqList(SqList& L, int x, int& e) {//静态表删除
	if (x<1 || x>L.lenth) {
		cout << "线性表删除参数不符合要求\n";
		return false;
	}
	e = L.data[x - 1];
	int i = x;
	for (i;i < L.lenth;i++) {
		L.data[i-1] = L.data[i];
	}
	L.data[L.lenth - 1] = 0;
	L.lenth = L.lenth - 1;
	return true;
}
void PrintSqList(SqList L) {
	int i = 0;
	for (i = 0;i < L.lenth ;i++) {
		cout << "\t"<< L.data[i] << endl;
	}
	
}
int WriteLinkList(SqList &L) {
	int x = 0;
	cout << "开始写入静态顺序表\n";
	cin >> x;
	while (x!=0)
	{
		if (L.lenth >= Maxsize) {
			cout << "静态顺序表已经达到最大长度\n";
			return false;
		}
		L.data[L.lenth] = x;
		L.lenth = L.lenth + 1;
		cin >> x;
	}
	return true;
}
typedef struct _DSqList //动态分配
{
	int *data;
	int MaxSize,length;
}DSqList;
void InitDList(DSqList &L) {
	L.data = (int*)malloc(InitSize * sizeof(L.data));
	L.length = 0;
	L.MaxSize = InitSize;
}
void IncreaseList(DSqList &L,int x) {
	int* p = L.data;
	L.data = (int*)malloc((InitSize + x) * sizeof(L.data));
	int i = 1;
	for (i = 1; i <= L.length;i++) {
		L.data[i - 1] = p[i - 1];
	}
	L.MaxSize = L.MaxSize + x;
	free(p);
}
void main() {
	DSqList L;//定义动态表
	InitDList(L);
	int x = 0;
	L.data[0] = 1;
	L.data[1] = 2;
	L.length = 2;
	std::cout << L.data[1]<<endl;
	std::cout << L.data[0]<<endl;
	cout << L.MaxSize << endl;
	IncreaseList(L, 2);
	cout << L.MaxSize << endl;
	std::cin >> x;
	//静态表操作
	int e;
	SqList StaticList;
	InitSqList(StaticList);
	WriteLinkList(StaticList);
	cout << "开始打印静态顺序表\n";
	PrintSqList(StaticList);
	DeleteSqList(StaticList, 6, e);
	cout << "开始打印静态顺序表\n";
	PrintSqList(StaticList);
	cout << e<< endl;
}