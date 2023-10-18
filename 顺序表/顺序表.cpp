#include <iostream>
#define InitSize 10
using namespace std;
struct SqList //动态分配
{
	int *data;
	int MaxSize,length;
};
void InitList(struct SqList& L) {
	L.data = (int*)malloc(InitSize * sizeof(L.data));
	L.length = 0;
	L.MaxSize = InitSize;
}
void main() {
	SqList L;
	InitList(L);
	int x = 0;
	L.data[0] = 1;
	L.data[1] = 2;
	L.length = 2;
	std::cout << L.data[1];
	std::cout << L.data[0];
	
	std::cin >> x;

}