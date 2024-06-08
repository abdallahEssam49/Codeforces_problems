#include <bits/stdc++.h>
using namespace  std;
#define test int t; cin>>t; while(t--)

void fast(){ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);}

int a[30] , b[30];

void solve ()
{
    //freopen("input.txt", "r", stdin);
    string str1 , str2; 
    cin>>str1>>str2;
    for(int i=0 ; i<str1.length();++i)a[str1[i]-'a']++;
    for(int i=0 ; i<str2.length();++i)b[str2[i]-'a']++;
    
    int ret =0;
    for(int i=0 ; i<30;++i)
    {
        if(a[i]==0&&b[i]>0)
        {
            cout << "-1";
            return;
        }
        else ret+=min(a[i] , b[i]);
    }
    cout << ret;
}

int main() 
{
  fast(); 
  //test 
  solve();
}
