///week02-2.cpp要使用(命名空間)
#include<iostream>///上週教的
#include<string>///第02週教的
using namespace std;///使用std(命名空間)
int main()
{
    cout <<"請問你叫什麼名字?";
    string name; ///宣告字串name
    cin >>name;///上週教cin原來長這樣
    std::cout<<name<<"你好,今天教命名空間喔!";
}
