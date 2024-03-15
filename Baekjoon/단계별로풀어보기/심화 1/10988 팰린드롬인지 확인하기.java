import static java.lang.System.out;
import java.util.*;
import java.util.Arrays;
import java.util.Collections;
public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String str=input.next();
		StringBuffer st = new StringBuffer(str);
		String str_reverse = st.reverse().toString();
		
		if(str.equals(str_reverse))
		    out.println("1");
		else
		    out.println("0");
	}
}
