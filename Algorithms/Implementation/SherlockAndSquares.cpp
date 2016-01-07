#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin >> a >> b;
        float c;
        int ctr=0;
        int tmp=0;
        bool k=true;
        for(int j=a;j<=b;j++)
        {                  
            c=sqrt(j);
            if((c==(int)c))
                {
                 ctr++;
                tmp=(int)c+1;
                while((tmp*tmp) <=b)
                    {
                    ctr++;
                    tmp++;
                }
                k=false;
        
            }
            if (!k) 
                {
                k=true;
                break;
            }
        }
                 cout << ctr << endl;
        
        
    }
    return 0;
}

