#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    string s="pwians";
    int n = (int)s.size();
    if (n % 2 != 0)
        cout << "Wrong input" << endl;
    else
    {
        reverse(s.begin() + n / 2, s.end());
        cout << s;
    }
}