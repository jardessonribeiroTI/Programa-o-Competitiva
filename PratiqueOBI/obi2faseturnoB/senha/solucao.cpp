#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ALL(x) x.begin(), x.end()
#define modulo(x) (x < 0 ? (x * (-1)) : x)
#define MAXN 200020
#define MAXV 1010
#define ll long long
#define ld long double
#define INF 2000000020LL
#define endl '\n'

using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};


int n, m, k;
int main(int argc, char const *argv[]){
    optimize;

    cin >> n >> m >> k;
    int p;
    string base;
    vector<string> passes, possi;
    cin >> base;

    for (int i = 0; i < m; i++)
    {
        string passe;
        cin >> passe;
        passes.push_back(passe);
    }
    cin >> p;
    int pos = 0;
    for (int i = 0; i < k; i++)
    {
        string senha = "";
        for (int j = 0; k < k; j++)
        {
            for (int p = 0; p < base.size(); p++)
            {
                
            }
            
        }
        
        possi.push_back(senha);
    }


    for (int i = 0; i < possi.size(); i++)
    {
        if(i == (p - 1)){
            cout << possi[i] << endl;
            break;
        }
    }
    
    


    return 0;
}