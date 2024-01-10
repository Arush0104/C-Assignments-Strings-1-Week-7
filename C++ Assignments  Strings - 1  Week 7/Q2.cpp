#include <iostream>
using namespace std;
int main()
{
    string s="pwians";
    int n = (int)s.size();
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i')
        {
            c++;
        }
    }
    cout << n - c;
}