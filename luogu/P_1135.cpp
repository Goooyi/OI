#include <iostream>
#include <cstring>
#include <cmath>
#include <queue>
using namespace std;

int arr[210];
int ans[210];

int main() {
    memset(ans,-1,210*4);
    for (int i = 0; i < 210; i++) {
        if (ans[i] != -1) cout << ans[i];
    }
    int n,a,b;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    queue<int> q;
    ans[a] = 0;
    q.push(a);
    while (!q.empty()) {
        int cur = q.front();
        if (cur == b) break;
        q.pop();
        if ((cur + arr[cur]) <= n && (cur + arr[cur]) >= 1 && ans[cur+arr[cur]] == -1) {
            q.push(cur+arr[cur]);
            ans[cur+arr[cur]] = ans[cur]+1;
        }
        if ((cur - arr[cur]) >= 1 && (cur - arr[cur]) <= n && ans[cur-arr[cur]] == -1) {
            q.push(cur-arr[cur]);
            ans[cur-arr[cur]] = ans[cur]+1;
        }
    }
    cout << ans[b] << endl;
}