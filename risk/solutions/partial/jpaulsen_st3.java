import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class jpaulsen_st3 {
	static int n,t,k,a;
	static int[] starts;
	static ArrayList<Integer>[] graph;
	public static void main(String[] args) throws IOException {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		st=new StringTokenizer(br.readLine());
		n=Integer.parseInt(st.nextToken());
		t=Integer.parseInt(st.nextToken());
		k=Integer.parseInt(st.nextToken());
		starts=new int[1];
		st=new StringTokenizer(br.readLine());
		starts[0]=Integer.parseInt(st.nextToken())-1;
		for (int i = 1; i < t; i++) {
			int s=Integer.parseInt(st.nextToken())-1;
		}
		graph=new ArrayList[n];
		for (int i = 0; i < n; i++) {
			graph[i]=new ArrayList<Integer>();
		}
		a=Integer.parseInt(br.readLine());
		while(a-->0){
			st=new StringTokenizer(br.readLine());
			int u=Integer.parseInt(st.nextToken())-1;
			int v=Integer.parseInt(st.nextToken())-1;
			graph[u].add(v);
			graph[v].add(u);
		}
		System.out.println(bfs());
	}
	static int bfs() {
		int ans=0;
		boolean[] marked=new boolean[n];
		ArrayDeque<Par> q=new ArrayDeque<Par>();
		for (int s: starts) {
			q.add(new Par(s,0));
		}
		while(!q.isEmpty()){
			Par p=q.pollFirst();
			if (marked[p.i]) continue;
			if (p.d>k) continue;
			marked[p.i]=true;
			ans++;
			for (int v:graph[p.i]) {
				q.add(new Par(v,p.d+1));
			}
		}
		return ans;
	}
	static class Par{
		int i,d;
		public Par(int i, int d){
			this.i=i;
			this.d=d;
		}
	}
}