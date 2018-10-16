#include <iostream>
#include <vector>

using namespace std;

bool isArmstrong(int num)
{
    int t = num;
    int res = 0;
    while(t>0)
    {
        res += (t%10)*(t%10)*(t%10);
        t /= 10;
    }
    return res == num;
}

vector<int> Problem08()
{
    vector<int> ans;

    for(int i=100;i<=999;i++)
    {
        if(isArmstrong(i))
            ans.push_back(i);
    }

    return ans;
}

int main(int argc, char* argv[])
{
    for(int num : Problem08())
        cout << num << endl;
    return 0;
}
