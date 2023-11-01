#include <iostream>
using namespace std;

int main()
{
    int cp;
    cout << "Enter Cost Price :";
    cin >> cp;
    int sp;

    cout << "Enter Selling Price :";
    cin >> sp;
    if (sp > cp)
    {
        int profit = sp-cp;
        cout<<profit;
        cout << "Profit ";
    }
    else
    {
        int loss = cp-sp;
        cout << "Loss";
    }

    return 0;
}