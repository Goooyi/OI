#include<vector>
#include<cstdio>
#include<unordered_set>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
int res[100005];
void dfs(int start, vector<vector<int>> &adj) {
    queue<int> q;
    q.push(start);
    res[start] = start;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int i : adj[cur]) {
            if (res[i] != 0) continue;
            res[i] = start;
            q.push(i);
        }
    }
}

int main() {
    int n,m;
    cin >> n >> m;
    int u,v;
    vector<vector<int>> adj(100005, vector<int>());
    while (m--) {
        cin >> u >> v;
        adj[v].emplace_back(u);
    }
    for (int i = n; i >= 1; i--) {
        if (res[i] == 0) {
            dfs(i, adj);
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", res[i]);
}