//https://www.hackerrank.com/challenges/alternating-characters

#include <iostream>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    string s;
    cin>>n;
    while(n)
        {   int count;
        cin>>s;
        
        for(int i=0;i<s.length();i++)
            {
            if(s[i]==s[i+1]) count++;
        }
         cout<<count<<endl;
         count=0;
         n--;
    }
    return 0;
}
