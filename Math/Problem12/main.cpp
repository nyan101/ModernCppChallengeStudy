#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

using llint = long long;

pair<int,int> Problem12(int n)
{
	vector<int> memo(n+1);

	fill(memo.begin(), memo.end(), -1);

	function<int(llint)> getCollatzLen = [&](llint num){
		if(1<=num && num<=n && memo[num]!=-1)
			return memo[num];

		if(num==1)
			return 1;

		int res = 1;
		if(num%2==0)
			res += getCollatzLen(num/2);
		else
			res += getCollatzLen(num*3+1);

		if(1<=num && num<=n)
			memo[num] = res;
		
		return res;
	};

	for(int i=1;i<=n;i++)
		memo[i] = getCollatzLen(i);

	int ans, maxi = -1;
	for(int i=1;i<=n;i++)
	{
		if(memo[i] > maxi)
		{
			ans = i;
			maxi = memo[i];
		}
	}

	return {ans, maxi};
}

int main(int argc, char* argv[])
{
	auto p = Problem12(1000000);
	cout << p.first << " " << p.second << endl;
    return 0;
}
