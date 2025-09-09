#include <iostream>
using namespace std;
int main()
{
    float f;
    cout << "Enter float" << endl;
    cin >> f;
    cout << "float:" << f << endl;
    cout << fixed << f << endl;
    cout << scientific << f << endl;
}