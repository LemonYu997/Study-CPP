//continue指令
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int number;
    int i, j;

    cout << "Enter a number, don't print this number of multiplication table:" << endl;
    cin >> number;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j == number)
                continue;          //跳出当前循环（此层，即只跳出一层，外层仍循环）
            cout << j << "*" << i << "=" << i * j << '\t';
        }
        cout << endl;
    }

    system("pause");
    return 0;
}