#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int a;
    cin >> a;
    if (a > 75) {
        cout << "Distinction" << endl;
    } else if (a > 60 && a <= 75) {
        cout << " First " << endl;
    } else if (a > 45 && a <= 60) {
        cout << "Second" << endl;
    } else if (a > 30 && a <= 45) {
        cout << "Third" << endl;
    } else if (a <= 30) {
        cout << " Fail" << endl;
    }
return 0;
}