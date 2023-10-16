// struct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
}bouquet,choice;
int main()
{
    bouquet = {
        "sunflowers",
        0.20,
        12.49
    };
    //inflatable choice;
    cout << "bouquet:" << bouquet.name << "for $";
    cout << bouquet.price <<"\n";
    choice = bouquet;
    cout << "choice:" << choice.name << "for $";
    cout << choice.price << endl;
    std::cout << "Hello World!\n";
}

