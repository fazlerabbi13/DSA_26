#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i,j;
    cin >> i >> j;

    int adj[i][j] = {0};

    for(int i = 0; i < j; i++){
        int u, v;
        cin >> u >> v;

        
    }
    // int vertices = 4;

    // int adj[4][4] = {0};

    // adj[0][1] = 1;
    // adj[1][0] = 1;

    // adj[0][2] = 1;
    // adj[2][0] = 1;

    // adj[1][3] = 1;
    // adj[3][1] = 1;

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}