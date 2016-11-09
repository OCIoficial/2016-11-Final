import java.util.Scanner;

public class jpaulsen_st2{
	static int n,t,k,a;
	static int[] starts;
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		t=sc.nextInt();
		k=sc.nextInt();
		starts=new int[t];
		for (int i = 0; i < t; i++) {
			starts[i]=sc.nextInt()-1;
		}
		a=sc.nextInt();
		while(a-->0){
			int u=sc.nextInt()-1;
			int v=sc.nextInt()-1;
		}
		int s=starts[0];
		if (s==0 || s==n-1)
			System.out.println(Math.min(k+1, n));
		else{
			int left=Math.min(k, s);
			int right=Math.min(k, n-1-s);
			System.out.println(left+right+1);
		}
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
