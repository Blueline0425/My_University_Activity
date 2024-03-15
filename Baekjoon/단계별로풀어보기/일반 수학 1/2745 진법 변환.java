import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    String str = input.next();
	    char[] ch = str.toCharArray();
	    double B= input.nextInt();
	    int sum=0;
	    
	    for(int i=0;i<str.length();i++){
	        
	        if(ch[i]>='A'&&ch[i]<='Z'){
	            int a = (int)(ch[i]-55);
	            double b = Math.pow(B,str.length()-1-i);
	            sum+=a*b;
	        }
	        
	        else{
	            int a = (int)(ch[i]-'0');
	            double b = Math.pow(B,str.length()-1-i);
	            sum+=a*b;
	        }
	    }
	    out.println(sum);
	        
	}
}
