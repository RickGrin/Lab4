
#include "iostream"
#include <string.h>
#include <conio.h>
using namespace std;
void Sort(int A[], int N, int i)
{
    if (i < N)
    {
        int min = A[i], index = i;
        for (int j = i + 1; j < N; j++)
            if (A[j] < min) min = A[j], index = j;
        A[index] = A[i];
        A[i] = min;
        i++;
        Sort(A, N, i);
    }
}
int main()
{
    int i = 0, N = 6;

    int* mas = new int[6]{ 9, 7, 5, 3, 1 };
    Sort(mas, N, i);
    for (int j = 0; j < N; j++)
        cout << mas[j] << "  ";
    _getch();
    delete mas;
    return 0;
}