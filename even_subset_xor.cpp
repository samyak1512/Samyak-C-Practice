#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define pb          push_back
#define endl        '\n'


signed main(){



    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {

        ll n;
        cin >> n;

        vector<int> arr;
        for(int i = 1; i <= n; i++){
            arr.pb(i);
        }

        if(n%2){
            cout << "YES" << endl;
            for(int i = 1; i <= (n/2); i++){
                cout << i << " ";
            }
            cout << n << " ";
            for(int i = n-1; i > (n/2); i--){
                cout << i << " ";
            }cout << endl;
        }else if(n != 2){
            cout << "YES" << endl;
            cout << (n/2) << " ";
            for(int i = 1; i < (n/2); i++){
                cout << i << " ";
            }
            for(int i = n; i > (n/2); i--){
                cout << i << " ";
            }cout << endl;
        }else{
            cout << "NO" << endl;

        }
    }

    return 0;
}