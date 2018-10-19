#include <iostream>
#include <string>

using namespace std;
 
bool Problem14(string ISBN)
{
    if(ISBN.length()!=10)
        return false;

    int chksum = 0;
    for(int i=0;i<=8;i++)
        chksum += (ISBN.at(i)-'0') * (10-i);

    chksum %= 11;

    if(chksum==1)
        return ISBN.at(9)=='X';

    return (ISBN.at(9)-'0' + chksum)%11==0;
}
 
int main(int argc, char* argv[])
{
    cout << Problem14("0198526636") << endl;
    return 0;
}
