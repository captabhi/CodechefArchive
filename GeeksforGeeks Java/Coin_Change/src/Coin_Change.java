import java.util.*;
public class Coin_Change {

	static int vec1[];
	
	public static int count(int idx, int val)
	{
		if(idx==0 || val==0)
		{
			return 1;
		}
		else if(idx<0|| val<0)
		{
			return 0;
		}
		else
		{
			return count(idx-1,val-vec1[idx]) + count(idx-1,val);
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Vector<int> vec = new Vector<int>();
		int t;
		//System.out.println("Hello");
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
			
			int m;
			m=sc.nextInt();
			vec1=new int[m];
			for(int j=0;j<m;j++)
			{
				vec1[j]=sc.nextInt();;
				
			}
			int n;
			n=sc.nextInt();
			int ans=count(m-1,n);
			System.out.println(ans+"\n");
		
		}
		
		
				

	}

}
