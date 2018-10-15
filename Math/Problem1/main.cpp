#include <iostream>

using namespace std;

int Problem01(int n)
{
    int ans;

    auto sumOfMultiples = [](int a, int n){ return a * ((n/a)*(1 + n/a))/2; };

    ans = 0;
    ans += sumOfMultiples( 3, n);
    ans += sumOfMultiples( 5, n);
    ans -= sumOfMultiples(15, n);

    return ans;
}

int main(int argc, char* argv[])
{
    cout << Problem01(100) << endl;

    return 0;
}
