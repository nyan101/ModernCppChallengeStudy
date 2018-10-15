#include <iostream>
#include <vector>

using namespace std;

int Problem04(int n)
{
    int ans = -1;
    vector<bool> isPrime(n+1);

    fill(isPrime.begin(), isPrime.end(), true);

    for(int i=2;i<=n;i++)
    {
        if(isPrime[i]==false)
            continue;

        for(int j=i*i;j<=n;j+=i)
            isPrime[j] = false;
    }

    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
            ans = i;
    }

    return ans;
}

int main(int argc, char* argv[])
{
    cout << Problem04(100) << endl;

    return 0;
}
