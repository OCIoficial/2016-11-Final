import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.StringTokenizer;
import java.util.Scanner;

public class jpaulsen_scanner {
	static int n,t,k,a;
	static int[] starts;
	static ArrayList<Integer>[] graph;
	public static void main(String[] args) throws IOException {
    Scanner in = new Scanner(System.in);
		n=in.nextInt();
		t=in.nextInt();
		k=in.nextInt();
		starts=new int[t];
		for (int i = 0; i < t; i++) {
			starts[i]=in.nextInt()-1;
		}
		graph=new ArrayList[n];
		for (int i = 0; i < n; i++) {
			graph[i]=new ArrayList<Integer>();
		}
		a=in.nextInt();
		while(a-->0){
			int u=in.nextInt()-1;
			int v=in.nextInt()-1;
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
}
class Par{
	int i,d;
	public Par(int i, int d){
		this.i=i;
		this.d=d;
	}
}
