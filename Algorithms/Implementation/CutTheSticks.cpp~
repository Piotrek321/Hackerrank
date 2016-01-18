#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    int n,end;
    cin >> n;
    end=2;
    vector<int> arr(n);

    vector <int> :: iterator it = arr.begin();
    
    cout << n << endl;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    while(end>1)
        {
            int temp =999999;
            int b=0;
            int j =0;
            it = arr.begin();
            for(int i=0;i<arr.size();i++)
                {
                if(arr[i]<temp)
                    {
                    temp=arr[i];

                }

            }

            while(it !=arr.end())
            {   arr[j] -=temp;
                if(arr[j] <=0) 
                    {

                    arr.erase(it);
                }else
                    {
                    it++;
                    j++;
                }
            }
             end=arr.size();   
                if(end!=0)cout << end << endl;
    }
    
    
    
    
    return 0;
}

