//baekjoon 10872
#include <iostream>
using namespace std;

int fac(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n * fac(n - 1);
}
int main()
{ 
    int num = 0;

    cin >> num;
    cout << fac(num) << endl;
}