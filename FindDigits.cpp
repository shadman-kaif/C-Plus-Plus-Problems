#include <bits/stdc++.h>

using namespace std;

int main()
{    
    int t;    
    cin >> t;
    int count;
    int m;
    for(int i = 0; i < t; i++){       
        int n;        
        cin >> n;        
        int d=n;                
        count=0;        
        while(d!=0) {           
            m=d%10;           
            if(m==0) {
                count=count+0;
            }
            else if (n%m==0) {
                count++;
            }
            d=d/10;
        }       
    cout<<count<<endl;    
    }    
return 0;
} 
