#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
 
string Problem11(int num)
{
	string ans = "";
	vector<pair<int,string>> sheets = {{1000, "M"}, {900, "CM"}, {500, "M"}, {400, "CD"},
									   {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
									   {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
	
	for(auto p : sheets)
	{
		while(num >= p.first)
		{
			ans += p.second;
			num -= p.first;
		}
	}
	
	return ans;
}
 
int main(int argc, char* argv[])
{
	cout << Problem11(2018) << endl;
	
    return 0;
}
