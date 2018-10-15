#include <iostream>

using namespace std;

int Problem02(int a, int b)
{
	if(a%b==0)
		return b;

	return Problem02(b, a%b);
}

int main(int argc, char* argv[])
{
	cout << Problem02(24,60) << endl;

    return 0;
}
