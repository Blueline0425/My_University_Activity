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
		int n = Integer.parseInt(bf.readLine());
		
		long[] arrx = new long[n];
		long[] arry = new long[n];
		long max_x=-10001;
		long max_y=-10001;
		long min_x=10001;
		long min_y=10001;
		for(int i=0;i<n;i++){
		    String xy = bf.readLine();
		    StringTokenizer stk = new StringTokenizer(xy);
		    arrx[i]= Long.parseLong(stk.nextToken());
		    arry[i]= Long.parseLong(stk.nextToken());
		}
		
		for(long i : arrx){
		    if(max_x<i){
		        max_x=i;
		    }
		    if(min_x>i){
		        min_x=i;
		    }
		}
		for(long i : arry){
		    if(max_y<i){
		        max_y=i;
		    }
		    if(min_y>i){
		        min_y=i;
		    }
		}
		
		long S = (max_x-min_x)*(max_y-min_y);
		
		out.println(S);
		
		
	}
}
