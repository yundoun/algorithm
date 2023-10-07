#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

int N, M, V;
int a, b;

vector<int> adj[10002];
vector<int>ary_dfs;
vector<int>ary_bfs;
queue<int> q;

int visit[1001] = {0,};

void dfs(int c) {
	visit[c] = 1; // 현재 노드 c 방문
	ary_dfs.push_back(c); // 정답 벡터에 푸시
	for (int i = 0; i < adj[c].size(); i++) {
		// 방문한 벡터의 크기만큼 반복
		if (visit[adj[c][i]] != 1) dfs(adj[c][i]);
		// 방문하지 않았다면 방문
	}
}


void bfs(int c) {
	q.push(c); // 탐색을 진행하기 위해 큐에 푸시
	visit[c] = 1; // 방문했음 표시

	while (!q.empty()) { 
		// 큐가 빌떄까지 반복, 큐가 비어있지 않다면 방문하지 않은 노드가 존재한다는 뜻

		int tmp = q.front();  // 탐색할 노드 임시 변수에 저장
		q.pop(); // 방문한 노드 pop;
		ary_bfs.push_back(tmp); // 정답 벡터에 푸시

		for (int i = 0; i < adj[tmp].size(); i++) {
			if (visit[adj[tmp][i]] != 1) { 
				// 방문하지 않았을 경우
				q.push(adj[tmp][i]);
				visit[adj[tmp][i]] = 1;

			}
		}
	}
}

void input() {
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
		// 양방향 간선 처리
	}
}

void solution() {

	for (int i = 1; i <= N; i++) {
		sort(adj[i].begin(), adj[i].end());  
		// 벡터안의 원소 오름차순 정렬
	}

	dfs(V); // dfs 탐색

	memset(visit, 0, sizeof(visit));

	bfs(V); // bfs 탐색

	for (int i = 0; i < ary_dfs.size(); i++) {
		cout << ary_dfs[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < ary_bfs.size(); i++) {
		cout << ary_bfs[i] << " ";
	}

}

void solve() {
	input();
	solution();
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;

}

