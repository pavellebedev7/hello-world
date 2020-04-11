#include <iostream>

using namespace std;

int main()
{
    while(true){
        int n = 0, i = 0;
        cout << "Enter an integer > 1" << '\n';
        cin >> n;
        if(n < 1) continue;
        while(n != 1){
            i++;
            if(n%2 == 0) n /= 2;
            else n = 3*n + 1;
            cout << i << ' ' << n << '\n';
        }
    }
}
