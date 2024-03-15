import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int N=input.nextInt();
	    int B=input.nextInt();
	    int n=N;
	    
	    int size=0;
	    while(n>=B){
	        n/=B;
	        size++;
	    }
	    char[] ch = new char[size+1];
	    double a = N;
	    for(int i=0;i<size+1;i++){
	        
	        double b = Math.pow(B,size-i);
	        double c = a/b;
	        int d = (int)c;
	        if(d>9){
	            ch[i]=(char)(d+55);
	        }
	        
	        else{
	            ch[i]=(char)(d+'0');
	        }
	        a-=(int)b * d;
	    }
	    String str = new String(ch);
	    out.println(str);
	}
}
