#include <iostream>

using namespace std;

int  n = 2; 
bool prime = false;
int main()
{
    while (true)
    {
        for (int i = 2; i < n - 1; i++) {
            if (n % i == 0) {
                cout << "dzielnik: " << i << endl;
                prime = false;
                break;
            }
            else  prime = true;
        }
        if (prime == true) cout << "pierwsza: " << n << endl;
        switch(n) {
        case 2:
          n++;
        default:
          n += 2;
        }
    }
}
