#include <iostream>

using namespace std;

int  n = 1; //program poda 1 jako liczbę pierwszą
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
        n += 2; //program nie poda 2 jako liczbę pierwszą, bo omija liczby parzyste
    }
}
