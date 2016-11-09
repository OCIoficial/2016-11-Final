import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Scanner;

public class jpaulsen_scanner{
	static int n,t,k,a;
	static int[] starts;
	static ArrayList<Integer>[] graph;
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		t=sc.nextInt();
		k=sc.nextInt();
		starts=new int[t];
		for (int i = 0; i < t; i++) {
			starts[i]=sc.nextInt()-1;
		}
		graph=new ArrayList[n];
		for (int i = 0; i < n; i++) {
			graph[i]=new ArrayList<Integer>();
		}
		a=sc.nextInt();
		while(a-->0){
			int u=sc.nextInt()-1;
			int v=sc.nextInt()-1;
			graph[u].add(v);
			graph[v].add(u);
		}
		System.out.println(bfs());
		sc.close();
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