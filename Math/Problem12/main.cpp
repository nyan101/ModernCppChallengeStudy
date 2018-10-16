#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int Problem12(int n)
{
	vector<int> memo(n+1);

	fill(memo.begin(), memo.end(), -1);

	function<int(int)> getCollatzLen = [&](int num){
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

	int ans = -1;
	for(int len : memo)
		ans = max(ans, len);
	return ans;
}

int main(int argc, char* argv[])
{
	cout << Problem12(100000) << endl;
    return 0;
}
