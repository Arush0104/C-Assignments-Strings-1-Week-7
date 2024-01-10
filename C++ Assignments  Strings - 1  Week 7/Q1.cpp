#include<iostream>
using namespace std;
int main()
{

    string s="physicswallah";
    for (int i = 1; i < (int)s.size(); i += 2)
    {
        s[i] = '#';
    }
    cout << s;
}