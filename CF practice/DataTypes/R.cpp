#include<iostream>
using namespace std;

int main()
{
    int n, years, months, days; cin >> n;
    years = n / 365;
    months = (n % 365) / 30;
    days = (n % 365) % 30;
    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";

    return 0;
}