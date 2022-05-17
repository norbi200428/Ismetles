#include <iostream>

using namespace std;

int duplicare(int n, int d)
{
    int v[100], i=0;
    int x = n;
    while(n > 0)
    {
        v[i] = n % 10;
        n/=10;
        i++;
    }
    for(int j = i - 1; j >= 0 ; j--)
    {
        if(v[j]%2==0)
        {
            d = d * 10 + v[j];
            d = d*10+v[j];
        }
        else
        {
            d = d * 10 + v[j];
        }
    }
    if(d == x){
        d = -1;
    }
    return d;
}
int main()
{
    int n, d = 0;
    cin >> n ;
    cout << duplicare(n,d);



    return 0;
}
