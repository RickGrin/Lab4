#include <iostream>
using namespace std;

void menu();

long int fact1(int n);

int fact2(int n);

int fact3(int n);

int Fait(int n);

int Gate(int n);

void perevod(int n);

int main()
{
    setlocale(LC_ALL, "Russian");
    int namber = 1;
    while (namber != 0)
    {
        menu();
        cout << "Задание № ";
        cin >> namber;

        switch (namber)
        {
        case 1:
        {
            int n = 0;
            cout << "Введите число для вычисления факториала: ";
            cin >> n;
            cout << "Рекурсивный факториал для числа " << n << " = " << fact1(n) << endl;
            {
                int res = 1;
                for (int i = 1; i <= n; i++) {
                    res = res * i;
                }
                cout << "Прямой алгоритм факториала для числа " << n << " = " << res << endl;
            }
            break;
        }
        case 2:
        {
            int n;
            cout << "Введите число для вычисления значения функции: " << endl;
            cin >> n;
            cout << "Функция F(" << n << ") равна " << fact2(n) << endl;
            break;
        }
        case 3:
        {
            int n;
            cout << "Введите число для проверки, является ли число точной степенью двойки: " << endl;
            cin >> n;
            if (fact3(n))
                printf("YES\n");
            else
                printf("NO\n");
            break;
        }

        case 4:
        {
            int k;
            cout << "Размер массива:";
            cin >> k;
            int* U = new int[k];
            for (int i = 0; i < k; i++)
            {
                cout << "i[" << i + 1 << "]:";
                cin >> U[i];
            }
            int a, b;
            cout << "Введите начало отрезка: ";
            cin >> a;
            cout << "Введите конец отрезка: ";
            cin >> b;
            int num = 0;
            for (int i = 0; i < k; i++)
                if ((U[i] >= a) && (U[i] <= b)) num++;
            cout << "Кол.элементов принадлежащих отрезку: " << num << endl;
            num = 0;

            break;
        }
        case 5:
        {
            int n;
            cout << "Введите число для перевода: ";
            cin >> n;
            cout << "Результат (в двоичной системе): ";
            perevod(n);
            cout << endl;

            break;
        }
        case 6:
        {
            int n = 0;
            cout << "Введите число, для нахождения значения функций: " << endl;
            for (n = 1; n < 11; n++)
            {
                cout << "Fait(" << n << ")= " << Fait(n) << "   Gate(" << n << ")= " << Gate(n) << endl;
            }
            break;
        }
        case 0:
        {
            cout << "EXIT..." << endl;
            cout << "..." << endl;
            cout << "..." << endl;
            return 0;
        }
        }
    }
    return 0;
}

long int fact1(int n)
{
    if (n == 0)
        return 1;
    else

        return n * fact1(n - 1);

}

int fact2(int n)
{
    if (n == 1) return 3;
    else
        return (n - 1) * fact2(n - 1);
}

int fact3(int n)
{
    if (n == 2) return 1;
    if (n % 2 == 1) return 0;
    else return fact3(n / 2);
}


int Fait(int n)
{
    if (n == 1) return -2;
    else
    {
        return  4 * Fait(n - 1) * Gate(n - 1);
    }
}


int Gate(int n)
{
    if (n == 1) return 1;
    else
    {
        return 5 * Fait(n - 1) + Gate(n - 1);
    }
}
void perevod(int n)
{
    if (n >= 2)
        perevod(n / 2);
    cout << n % 2;
}

void menu()
{
    cout << "4 - 6 вариант- 1 задание" << endl;
    cout << "5 - 6 вариант- 2 задание" << endl;
    cout << "6 - 6 вариант- 3 задание" << endl;
    cout << "0 - EXIT" << endl;
}
