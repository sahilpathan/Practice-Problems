//https://www.hackerrank.com/challenges/beautiful-binary-string
#include <iostream>
#include <string>

using namespace std;
int beautiful(string s,int n)
    { 
      int found = s.find("010"); //find -->The position of the first character of the first match.
                                    //If no matches were found, the function returns string::npos.
      if(found == -1)  {return 0;}
    
   
     static int count= 0;
      if(found !=-1)
      {
          count++;
          string sub = s.substr(found+3,n);
        
          beautiful(sub,n);
      }  
    return count;
}

int main(){
    int n,i;
    cin >> n;
    string s;
    cin >> s;  
    
    i=beautiful(s,n);
     cout<<i; 
    return 0;
}
