#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for (int count = 0; count < n; ++count)
    {
    std:
        cin >> s;
        if (s.length() >= 11)
        {
            string length = to_string(s.length() - 2);
            s.replace(1, s.length() - 2, length);
        }
        cout << s << std::endl;
    }
    return 0;
}
