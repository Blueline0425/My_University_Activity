import static java.lang.System.out;
import java.util.*;
import java.math.BigInteger;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int a=input.nextInt();
	    int[] arr=new int[a];
	    int count=0;
	    
	    for(int i=0;i<a;i++){
	        arr[i]=input.nextInt();
	    }
	    
	    for(int i : arr){
	        int count_in=0;
	        for(int k=0;k<1000;k++){
	            if(i%(k+1)==0){
	                count_in++;
	            }
	        }
	        if(count_in==2){
	            count++;
	        }
	        
	        
	        
	        
	        
	    }
	    out.println(count);
	}
}
