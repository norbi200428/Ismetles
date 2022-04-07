#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in.txt");
    int  n, m, v[100][100];
    in >> n >> m;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            in >> v[i][j];
        }
    }
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            cout << v[j][i] << " ";
        }

    }

    return 0;
}
