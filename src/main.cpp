#include <vector>
#include <iostream>
#include <functional>

#define newl '\n'
#define tabc '\t'
#define spac ' '

using namespace std;

void f_2_3_6(int n);
int  f_2_3_8(int n);

int main(int argc, char ** argv)
{
    f_2_3_6(3);
}

void f_2_3_6(int n)
{
    int i = 1;
    while (n > 0)
    {
        --n;
        cout << i << ' ';
        i += i;
    }
}

int f_2_3_8(int n)
{
    int i = 1;
    int s = 1;
    int sign = 1;
    cout << i;
    while (--n > 0)
    {
        i += 2;
        sign = (-1) * sign;
        s = s + (sign * i);
        cout << ' ' << (sign == 1 ? '+' : '-') << ' ' << i;
    }
    return s;
}
