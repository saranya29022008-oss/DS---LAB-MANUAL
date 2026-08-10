#include <iostream>
using namespace std;

int main()
{
    int a[10][10], r, c;

    cout << "Enter the number of rows: ";
    cin >> r;

    cout << "Enter the number of columns: ";
    cin >> c;

    cout << "Enter the array elements:\n";

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nThe array elements are:\n";

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
