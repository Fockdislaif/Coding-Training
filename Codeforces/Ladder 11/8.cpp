#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;

  while(cin >> s){
    s[0] = ::toupper(s[0]);
    cout << s << "\n";
  }

  return 0;
}