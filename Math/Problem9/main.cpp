#include <iostream>
#include <vector>

using namespace std;

vector<int> Problem09(int num)
{
	vector<int> ans;

	for(int i=2;i*i<=num;i++)
	{
		while(num % i==0)
		{
			ans.push_back(i);
			num /= i;
		}
	}

	if(num>1)
		ans.push_back(num);

	return ans;
}

int main(int argc, char* argv[])
{
	for(int num : Problem09(5040))
		cout << num << endl;
    return 0;
}
