import java.util.*;
import static java.lang.System.out;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
public class Main
{
	public static void main(String[] args) throws IOException {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		long[] tri = new long[3];
		
		while(true){
		    String abc = bf.readLine();
		    long max=-9999;
		    long sum=0;
		    StringTokenizer stk = new StringTokenizer(abc);
		    tri[0] = Long.parseLong(stk.nextToken());
		    tri[1] = Long.parseLong(stk.nextToken());
		    tri[2] = Long.parseLong(stk.nextToken());
		    long a =tri[0];
		    long b =tri[1];
		    long c =tri[2];
		    for(int i=0;i<3;i++){
		        sum+=tri[i];
		        if(max<tri[i])
		            max=tri[i];
		    }
		    if(a==0)
		        break;
		    if(max<sum-max){
		    if(a==b&&b==c){
		        out.println("Equilateral");    
		    }
		    else if(a==b||b==c||c==a){
		        out.println("Isosceles");
		    }
		    else
		        out.println("Scalene");
		}
		else
		    out.println("Invalid");
		    
		    
		}
		
	
		
	
		
	}
}
