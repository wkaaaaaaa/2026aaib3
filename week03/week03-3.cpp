//week03-3.cpp今天的主題 C++陣列
#include <iostream>
#include <vector>//本周主題 vector陣列
using namespace std;

int main()
{
    vector<int> a;//C++編譯自動的陣列 的宣告
    a.push_back(99);//把99塞進陣列後面
    a.push_back(88);//把88塞進陣列後面
    a.push_back(77);//把77塞進陣列後面
    for (int i=0; i<a.size(); i++) cout << a[i] << " ";
    cout << "\n";

    a.push_back(88);//把88塞進陣列後面
    a.push_back(77);//把77塞進陣列後面
    for (int i=0; i<a.size(); i++) cout << a[i] << " ";
    cout << "\n";
}
