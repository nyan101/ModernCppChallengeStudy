#include <iostream>
#include <vector>

using namespace std;

using llint = long long;

llint myGCD(llint a, llint b)
{
	if(a%b==0)
		return b;

	return myGCD(b, a%b);
}

llint Problem03(vector<int> vec)
{
	llint ans = 1;
	for(llint num : vec)
		ans = ans/myGCD(ans, num)*num;

	return ans;
}

int main(int argc, char* argv[])
{
	cout << Problem03({1, 2, 3, 4, 5}) << endl;
    return 0;
}
