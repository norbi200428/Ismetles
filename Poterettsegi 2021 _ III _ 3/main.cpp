#include <iostream>
#include <fstream>

using namespace std;

bool szj(int a, int b)
{
    int a1 = a % 100;
    int b1 = b % 100;
    int x =a1;
    int szaj, uja1 = 0;
    while(a1 > 0)
    {
        szaj = a1 %10;
        a1 = a1 /10;
        uja1 = uja1 * 10 + szaj;
    }
    if(x != b1 && uja1 != b1)
    {
        return false;
    }
    return true;
}
int main()
{
    ifstream in("numere.in");
    int na, nb;
    in >> na;
    in >> nb;
    int A[100], B[100];
    for(int i = 0 ; i < na ; i ++)
    {
        in >> A[i];
    }
    for(int i = 0 ; i < nb ; i ++)
    {
        in >> B[i];
    }
    int contor = 0;
    for(int i = 0 ; i < na ; i++)
    {
        for(int j = 0 ; j < nb ; j++)
        {
            if(szj(A[i], B[j]) == 1)
            {
                contor ++;
            }
        }
    }
    cout << contor;
    return 0;
}
