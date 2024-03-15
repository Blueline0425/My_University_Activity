import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    char[][] arr = new char[5][15];
	    char[][] arr_rotate = new char[15][5];
	    String str = new String("");
	    String[] leng = new String[5];
	    int max_column=-9999;
	    for(int k=0;k<5;k++){
	        String s = input.next();
	        arr[k]=s.toCharArray();
	        if(s.length()>max_column)
	            max_column=s.length();
	        }
	   for(int i=0;i<max_column;i++){
	       //if
	       for(int k=0;k<5;k++){
	           try{
	           if(arr[k][i]!='\n'){
	               str+=Character.toString(arr[k][i]);
	           }
	           }
	           catch(ArrayIndexOutOfBoundsException e){
	               continue;
	               
	           }
	       }
	   }
	   
	   out.println(str);
	}
}
