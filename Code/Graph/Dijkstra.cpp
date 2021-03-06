vector<vector<ii > > adj;//(v, w)
vi dis;

void dijkstra(int x){
	priority_queue<ii, vector<ii>, greater<ii>> pq;
	pq.push({0, x});
	dis[x] = 0;
	
	while(!pq.empty()){
		ii x = pq.top(); pq.pop();
		int u = x.second;
		if (x.first > dis[u]) continue;
		for (auto e : adj[u]){
			int v = e.first, w = e.second;
			if (dis[u]+w < dis[v]){
				dis[v] = dis[u] + w;
				pq.push({dis[v], v});
			}
		}
	}
}

/*
adj.resize(vertices, vector<ii >());
dis.resize(vertices, INT_MAX);
adj[v1].push_back({v2, W});
*/
