#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,t,n;
    cin >>t;
    for(int z=0;z<t;z++)
        {
        cin >> a >>b >> n;
        int l=1;
        int number=0;
        while(l<n+1)
        {
              for(int m=0;m<l;m++)
            {
                  number += pow(2,m)*b;
            }
        cout << a+number << " ";
            number =0;
            l++;
            
        }
        cout << endl;
      
       
        
    }
    return 0;
}

