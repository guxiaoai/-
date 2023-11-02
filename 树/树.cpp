#include<stddef.h>
#include <iostream>
using namespace std;
#define MaxSize 100;
struct TreeNode {
	int value;
	bool isEmpty;
};
typedef struct _BitNode {
	int data;
	struct _BitNode* lChild, * rChild;
}*BitTree, BitNode;
void InsertNewNode(BitTree T,int x){
	BitNode* p = (BitNode*)malloc(sizeof(BitNode));
}

void main(){
	BitTree Root = NULL;
	
}