#include<iostream>
using namespace std;
int main(){
    // freopen("sample.txt","r",stdin);
    // freopen("o.txt","w",stdout);
    int t;
    cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int cost=0;
        int strlen=s.length();
        char prev='A';
        for (int i = 0; i < strlen; i++)
        {
            if (s[i]=='C')
            {
                if (prev=='J')
                {
                    cost+=y;
                }
                prev='C';
            }
            else if (s[i]=='J')
            {
                if (prev=='C')
                {
                    cost+=x;
                }
                prev='J';
            }
        }
        cout<<"Case #"<<tc<<": "<<cost<<endl;
    }
}