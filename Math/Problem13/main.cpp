#include <iostream>
 
using namespace std;

double Problem13(int n)
{
    int cnt=0;

    for(int i=1;i<2*n;i+=2)
    {
        for(int j=1;j<2*n;j+=2)
        {
            if(i*i + j*j < 4*n*n)
                cnt++;
        }
    }
 
    return (4.0*cnt)/(n*n);
}
 
int main(int argc, char* argv[])
{
    cout << Problem13(1000) << endl;
    return 0;
}
