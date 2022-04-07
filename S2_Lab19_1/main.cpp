#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.in");
    ofstream out("output.out");
    int na, nb ;
    in >> na;
    in >> nb;
    int v[100];
    for(int i = 0 ; i < 100 ; i++)
    {
        v[i] = 0;
    }
    for(int i = 0 ; i < na ; i ++)
    {
        int a;
        in >> a;
        v[a] = 1;
    }
    for(int i = 0 ; i < nb ; i++)
    {
        int b;
        in >> b;
        if(v[b] == 0)
        {
            v[b] = 1;
        }
        else if(v[b]==1)
        {
            v[b] = 2;
        }

    }
    for(int  i = 1; i < 100 ; i+=2)
    {
        if(v[i] == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}
