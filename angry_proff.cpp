//https://www.hackerrank.com/challenges/angry-professor

#include <vector>
#include <iostream>

using namespace std;

void class_status(vector<int> a,int strngth,int th)
    {
    int i=0;
    int len = strngth -1;
    while(th != 0 && i <= len )
    {
        if(a[i] <= 0) th--;
        i++;
    }
    if(th==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int strength;
        int threshold;
        
        cin >> strength >> threshold;
        
        vector<int> arrival(strength);
        for(int a_i = 0;a_i < strength;a_i++){
           cin >> arrival[a_i];
        }
        
        class_status(arrival,strength,threshold);
    }
    
    
    return 0;
}
