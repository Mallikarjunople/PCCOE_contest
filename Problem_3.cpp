#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
   ll t;cin>>t;
    while(t--){
    ll b,p,f,c,h,total=0,mx=0,cst=0;
        cin>>b>>p>>f>>h>>c;
        total=b/2;
        mx=max(h,c);
        if(mx==c){
            while(f--)
            {   
             if(total==0)
                    break;
                total--;
             cst+=c;
                  
            }
           
            while(p--)
            {   
              if(total==0)
                    break;
                total--;
             cst+=h;
               
            }
        }
        else{
            while(p--)
            {   
              if(total==0)
                    break; 
                total--;
             cst+=h;
                
            }
    
           
            while(f--)
            {   
               if(total==0)
                    break; 
                total--;
             cst+=c;
                
            }
            
        }
      
        cout<<cst<<endl;
    }
    return 0;
}   
