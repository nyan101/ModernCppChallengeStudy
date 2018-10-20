#include <iostream>
#include <vector>

using namespace std;

vector<int> Problem06(int n)
{
    vector<int> ans;
    vector<int> sumOfDivs(n+1);

    fill(sumOfDivs.begin(), sumOfDivs.end(), 0);

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
            sumOfDivs[j] += i;
        sumOfDivs[i] -= i;
    }

    for(int i=1;i<=n;i++)
    {
        if(sumOfDivs[i] > i)
            ans.push_back(i);
    }

    return ans;
}

int main(int argc, char* argv[])
{
    for(int num : Problem06(100))
        cout << num << endl;

    return 0;
}
