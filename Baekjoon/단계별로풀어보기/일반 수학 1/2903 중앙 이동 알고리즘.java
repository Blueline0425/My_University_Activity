import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int N = input.nextInt();
		int n=2;
		int[] arr = new int[N+1];
		arr[0]=n;
		for(int i=1;i<N+1;i++){
		    arr[i]=2*arr[i-1]-1;
		}
		out.println(arr[N]*arr[N]);
	}
}
