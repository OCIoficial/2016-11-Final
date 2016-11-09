import java.util.Scanner;

public class jpaulsen_st1{
	static int n,t,k,a;
	static int[] starts;
	static int[] neighbors;
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		t=sc.nextInt();
		k=sc.nextInt();
		starts=new int[t];
		for (int i = 0; i < t; i++) {
			starts[i]=sc.nextInt()-1;
		}
		neighbors=new int[n];
		a=sc.nextInt();
		while(a-->0){
			int u=sc.nextInt()-1;
			int v=sc.nextInt()-1;
			neighbors[u]++;
			neighbors[v]++;
		}
		int s=starts[0];
		System.out.println(neighbors[s]+1);
		sc.close();
	}
	static class Par{
		int i,d;
		public Par(int i, int d){
			this.i=i;
			this.d=d;
		}
	}
}
