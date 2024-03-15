import static java.lang.System.out;
import java.util.*;
import java.math.BigInteger;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int N=input.nextInt();
	        for(int i=2;i<=Math.sqrt(N);i++){
	            while(N%i==0){
	                out.println(i);
	                N/=i;
	            }
	        }
	        if(N!=1){
	            out.println(N);
	        }
	}
}
