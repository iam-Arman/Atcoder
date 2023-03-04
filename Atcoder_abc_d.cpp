#include<bits/stdc++.h>
using namespace std;
inline void file() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}

const int MAXN = 2e5 + 5;
vector<int> adj[MAXN];
bool visited[MAXN];
int num_vertices, num_edges;

void dfs(int u) {
    visited[u] = true;
    num_vertices++;
    num_edges += adj[u].size();
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

bool check_connected_component(int u) {
    num_vertices = 0;
    num_edges = 0;
    dfs(u);
    return num_vertices == num_edges / 2;
}

int main() {
   // file();
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ok = true;
    memset(visited, false, sizeof(visited));
    for (int u = 1; u <= n; u++) {
        if (!visited[u]) {
            if (!check_connected_component(u)) {
                ok = false;
                break;
            }
        }
    }
    if (ok) {
        cout << "Yes"<<endl;
    } else {
        cout << "No"<<endl;
    }
    return 0;
}


// problem link : https://atcoder.jp/contests/abc292/tasks/abc292_d
