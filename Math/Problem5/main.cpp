#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

vector<pair<int,int>> Problem05(int n)
{
    vector<pair<int,int>> ans;
    vector<bool> isPrime(n+1);


    fill(isPrime.begin(), isPrime.end(), true);

    for(int i=2;i<=n;i++)
    {
        if(isPrime[i]==false)
            continue;

        for(int j=i*i;j<=n;j+=i)
            isPrime[j] = false;
    }

    for(int i=11;i<=n;i++)
    {
        if(isPrime[i-6] && isPrime[i])
            ans.push_back({i-6, i});
    }

    return ans;
}

int main(int argc, char* argv[])
{
    for(auto p : Problem05(100))
        cout << p.first << " " << p.second << endl;

    return 0;
}
