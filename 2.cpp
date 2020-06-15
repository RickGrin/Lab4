#include <iostream>

using namespace std;

int member(int memb, int dif, int n)
{
    if (n) memb = dif + member(memb, dif, n - 1);
    return memb;
}


int main()
{
    int N = 3;
    int differ = 7;//разность
    int first = 1;
    cout << member(first, differ, N - 1) << endl;
    return 0;
}
