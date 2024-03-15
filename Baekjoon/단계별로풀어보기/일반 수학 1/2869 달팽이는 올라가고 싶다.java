import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int A,B,V;
		A=input.nextInt();
		B=input.nextInt();
		V=input.nextInt();
		if((V-A)%(A-B)==0){
		    int k = (int)((V-A)/(A-B))+1;
		    out.println(k);
		}
		else{
		    int k = (int)((V-A)/(A-B))+2;
		    out.println(k);
		}
	}
}
