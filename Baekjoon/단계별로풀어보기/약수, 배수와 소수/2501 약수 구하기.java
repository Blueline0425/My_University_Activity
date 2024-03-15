import static java.lang.System.out;
import java.util.*;
import java.math.BigInteger;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int N = input.nextInt();
	    int K = input.nextInt();
	    int[] arr = new int[10000];
	    for(int i=0;i<10000;i++){
	        arr[i]=0;
	    }   
	    int li=0;
	    
	    for(int i=1;i<=10000;i++){
	        if(N==0){
	            out.println(0);
	            System.exit(0);
	        }
	        if(N%i==0){
	            arr[li]=i;
	            li++;
	        }
	    }
	    out.println(arr[K-1]);
    }
}
