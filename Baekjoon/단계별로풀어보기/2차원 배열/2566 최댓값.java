import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int[][] arr1 = new int[9][9];
	    int max = -99999;
	    int max_row=0;
	    int max_column=0;
	    for(int k=0;k<9;k++){
	            for(int n=0;n<9;n++){
	                arr1[k][n]=input.nextInt();
	            }
	        }
	    for(int k=0;k<9;k++){
	            for(int n=0;n<9;n++){
	                if(arr1[k][n]>max){
	                    max=arr1[k][n];
	                    max_row=k;
	                    max_column=n;
	                }
	            }
	        }
	   out.println(max);
	   out.printf("%d %d",max_row+1,max_column+1);
	}
}
