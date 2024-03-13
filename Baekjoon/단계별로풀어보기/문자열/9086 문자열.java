import static java.lang.System.out;
import java.util.*;
import java.util.Arrays;
import java.util.Collections;
public class Main
{
	public static void main(String[] args) {
		
		Scanner put = new Scanner(System.in);
		
		int n= put.nextInt();
		String[] str=new String[n];
		String[] str_out = new String[n];
		Arrays.fill(str_out,"");
		for(int i=0;i<n;i++){
		    str[i]=put.next();
		    str_out[i]+=str[i].charAt(0);
		    str_out[i]+=str[i].charAt(str[i].length()-1);
		}
		for(String st : str_out)
		    out.println(st);
    scanner.close();
    }
}
