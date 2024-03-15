import static java.lang.System.out;
import java.util.*;
import java.math.BigInteger;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int M=input.nextInt();
	    int N=input.nextInt();
	    int sum=0;
	    int min=9999;
	    
	    for(int i=M;i<N+1;i++){
	        int count_in=0;
	        for(int k=0;k<10000;k++){
	            if(i%(k+1)==0){
	                count_in++;
	            }
	        }
	        if(count_in==2){
	            sum+=i;
	            if(i<min){
	                min=i;
	            }
	        }
	        
	        
	        
	        
	        
	    }
	    if(sum==0)
	        out.println(-1);
	    else{
	        out.println(sum);
	        out.println(min);
	    }
	}
}
