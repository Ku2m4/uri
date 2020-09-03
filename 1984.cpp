#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string n;

    while(cin >> n){

        reverse(n.begin(), n.end());
        cout << n << "\n";
    }

    return 0;
}
