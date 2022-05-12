#include <iostream>
#include <fstream>

using namespace std;

int sub(int n)
{
    int s = 0, szj ;
    while(n > 0)
    {
        szj = n % 10;
        n = n / 10;
        s = s + szj;
    }
    return s;
}
bool echilibrat(int p)
{
    int v[100], szj ;
    int x = p, i = 0;
    while(p > 0)
    {
        szj = p % 10;
        v[i] = szj;
        p = p / 10;
        i++;
    }
    int s1 = 0, s2 = 0;
    for(int j = 0 ; j < i/2 ; j ++)
    {
        s1 = s1 + v[j];
    }
    for(int j = i/2 ; j < i ; j ++)
    {
        s2 += v[j];
    }
    if(s1 != s2)
    {
        return false;
    }
    return true;
}
int main()
{
    ifstream in("def.in");
    int t[100] , i = 0;
    while(in >> t[i]){
        i++;
    }
    int a[100] , h =0;
    for(int j = 0 ; j < i ; j++){
        if(echilibrat(t[j]) == 1){
            a[h] = t[j];
            h++;
        }
    }

    for(int j = 0 ; j < h-1 ; j ++){
        for(int k = 1 ; k < h ; k++){
            if(a[j]  > a[k]){
                swap(a[j],a[k]);
            }
        }
    }

    cout << a[h-1] << " " << a[h-2];
    return 0;
}
