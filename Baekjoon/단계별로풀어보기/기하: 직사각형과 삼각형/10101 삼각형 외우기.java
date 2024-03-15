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
		long a = Long.parseLong(bf.readLine());
		long b = Long.parseLong(bf.readLine());
		long c = Long.parseLong(bf.readLine());
		
		if(a+b+c==180){
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
		    out.println("Error");
		
	}
}
