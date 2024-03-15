import static java.lang.System.out;
import java.util.*;
import java.math.BigInteger;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    
	    while(true){
	        int a = input.nextInt();
	        int b = input.nextInt();
	        if(a==0&&b==0){
	            System.exit(0);
	        }
	        if(b%a==0){
	            out.println("factor");
	        }
	        else if(a%b==0){
	            out.println("multiple");
	        }
	        else{
	            out.println("neither");
	        }
	        
	    }
	}
}
