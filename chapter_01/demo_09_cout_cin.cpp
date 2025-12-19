#include<iostream>
using namespace std;
// cout发音为“see-out”。用于输出，并使用插入算符（<<)
// cin发音为“see-in”。用于输入，并使用提取算符（>>)
// const不可更改且为只读
int main(){
    const int myNum = 15; 
    // myNum = 10;
    cout << "" << endl;
    
    cout << "okkk";
    cout << 3 + 3;
    cout << 2 * 5;
    cout << "Hello World!" << "\n\n";
    int x;
    cout << "输入一个数：";
    cin >> x;
    cout << "打印数字:" << x;
    return 0;
}
