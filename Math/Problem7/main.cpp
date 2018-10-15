#include <iostream>
#include <vector>

using namespace std;

vector<pair<int,int>> Problem07(int n)
{
    vector<pair<int,int>> ans;
    vector<int> sumOfDivs(n+1);

    fill(sumOfDivs.begin(), sumOfDivs.end(), 0);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j*j<=i;j++)
        {
            if(i%j!=0) continue;

            sumOfDivs[i] += j;
            if(j != i/j)
                sumOfDivs[i] += i/j;
        }
        sumOfDivs[i] -= i;
    }

    for(int i=1;i<=n;i++)
    {
        if(i < sumOfDivs[i] && sumOfDivs[i] <= n && sumOfDivs[sumOfDivs[i]]==i)
            ans.push_back({i,sumOfDivs[i]});
    }

    return ans;
}

int main(int argc, char* argv[])
{
    for(auto p : Problem07(1000000))
        cout << p.first << " " << p.second << endl;

    return 0;
}
