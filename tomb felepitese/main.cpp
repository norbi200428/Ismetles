#include <iostream>

using namespace std;

int main()
{
    int n, k, v[100][100];
    cout << "k = ";
    cin >> k;

    cout << "n =";
    cin >> n;

   for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(j == 0)
            {
                v[i][0] = k*(i+1) - i ;
            }
            else
            {
                v[i][j] = v[i][j-1] + 1;
            }
        }
    }

    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
