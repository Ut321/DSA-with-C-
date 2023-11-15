// P3 : Input 412 | Output :  Four one two
#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "nine"};
    int n;
    cin >> n;
    sayDigit(n, arr);
    cout << endl
         << endl
         << endl;
}
