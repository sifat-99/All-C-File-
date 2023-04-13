#include<stdio.h>
int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;

    string s;
    cin >> s;

    char mx = 'a' - 1;
    for(int i = 0; i < n; i++){
      if(mx < s[i]){
        mx = s[i];
      }
    }

    cout << mx - 'a' + 1 << '\n';
  }
}
