#include <iostream>
#include <set>

using namespace std;
const int MAXN = 200006;

int f[MAXN] = {};
set<int> s[MAXN];

int getfather(int x)
{
	if (f[x] == x)
	{
		return x;
	}
	return f[x] = getfather(f[x]);
}

int main(int argc, char const *argv[])
{
	int n, m, k, tmp, l, r;
	int last[MAXN] = {};
	cin>>n>>m>>k;
	for (int i = 1; i <= n; ++i)
	{
		cin>>tmp;
		if (last[tmp])
		{
			f[i] = getfather(last[tmp]);
		}
		else
		{
			last[tmp] = i;
			f[i] = i;
		}
	}
	int ans = 0;
	for (int i = 0; i < m; ++i)
	{
		cin>>l>>r;
		int u = getfather(l);
		int v = getfather(r);
		if (u != v)
		{
			if(s[u].size() > s[v].size()) swap(u, v);
			f[u] = v;
			for (std::set<int>::iterator it = s[u].begin(); it != s[u].end(); ++it)
			{
				s[*it].erase(u), s[*it].insert(v), s[v].insert(*it);
			}
			++ans;
		}
	}
	cout<<ans<<endl;
	return 0;
}
