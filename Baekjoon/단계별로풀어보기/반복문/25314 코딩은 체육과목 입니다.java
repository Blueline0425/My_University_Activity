import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		for(int i=0;i<n;i+=4){
		    out.printf("long ");
		}
		out.printf("int");
    scanner.close();
	}
}
