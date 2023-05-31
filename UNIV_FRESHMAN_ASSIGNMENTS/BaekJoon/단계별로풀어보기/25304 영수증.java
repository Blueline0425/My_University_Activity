import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int a,b;
		int sum=0;
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt();
		int n = scanner.nextInt();
		for(int i=0;i<n;i++){
		    a = scanner.nextInt();
		    b = scanner.nextInt();
		    sum+=a*b;
		}
		
		if(x==sum)
		    out.println("Yes");
		else
		    out.println("No");
	}
}
