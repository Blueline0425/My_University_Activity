import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int N = input.nextInt();
		int li=1;
		int near=1;
		int bee=1;
		while(N>bee){
		    bee+=6*li;
		    li++;
		    near++;
		}
		out.println(near);
	}
}
