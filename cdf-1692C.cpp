#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    char s[8][8];
    cin >> t;
    for (int i = 0; i < t; i++){


        int n = 8;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
            }

        }



        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if(s[i][j] == '#' && s[i-1][j-1] == '#' && s[i-1][j+1] == '#' && s[i+1][j-1] == '#'){
                    cout <<i+1<<" "<<j+1<<endl;

                }
            }

        }

    }
    return 0;
}
