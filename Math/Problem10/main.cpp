#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

void Problem10(int bits)
{
    vector<int> gcode;
    vector<int> inv_gcode(1<<bits);

    for(int i=0;i<(1<<bits);i++)
        gcode.push_back(i ^ (i>>1));

    for(int i=0;i<gcode.size();i++)
        inv_gcode[gcode[i]] = i;

    for(int i=0;i<gcode.size();i++)
        cout << i << " " << bitset<5>(gcode[i]) << " " << bitset<5>(inv_gcode[gcode[i]]) << endl;

    return;
}
 
int main(int argc, char* argv[])
{
    Problem10(5);
    return 0;
}
