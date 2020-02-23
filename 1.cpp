#include <iostream>

using namespace std;

int swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x, y, z, w, a, b, c;
    while(true){

        cout << "Hello World!" << endl;
        cin >> x >> y >> z >> w;
        if(w < x) swap(w, x);
        if(w < y) swap(w, y);
        if(w < z) swap(w, z);

        a = w - x;
        b = w - z;
        c = w - y;
        printf("%i %i %i\n", a, b, c);
    }

    return 0;
}
