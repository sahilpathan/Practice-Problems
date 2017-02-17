//https://www.hackerrank.com/challenges/find-digits
#include <string>
#include <vector>
#include <iostream>

using namespace std;
int broken_digits(int n)
{
        int count =0;
         string s = to_string(n);         
        for(int i = 0; i < s.size(); i++)
        {
            int d = stoi(s.substr(i, 1));      //string substr (size_t pos = 0, size_t len = npos) const;
            if(d!=0)
            {
                if(n%d == 0)
                count++;
            }
        }     
          return count;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;     
       
        cout<<broken_digits(n)<<endl;
    }
    return 0;
}
