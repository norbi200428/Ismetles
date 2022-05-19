#include <iostream>
#include <fstream>

using namespace std;

int minmax(int n , int minim , int maxim){
      int szj;
      minim = 1000;
      maxim = 0;
      while(n > 0){
        szj = n % 10;
        if(szj < minim){
            minim = szj;
        }
        if(szj > maxim){
            maxim = szj;
        }
        n/=10;
      }
      int a = maxim - minim;

      return a;
}

int main()
{
    ifstream in("def.in");
    int szam , contor = 0;
    while(in >> szam){
        if(minmax(szam , 0 , 0) == 1){
            contor ++;
            cout << szam << " ";
        }
    }
    cout << contor;
    return 0;
}
