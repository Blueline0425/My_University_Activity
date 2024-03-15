import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int a = input.nextInt();
	    int b = input.nextInt();
	    int[][] arr1 = new int[a][b];
	    int[][] arr2 = new int[a][b];
	    int[][] arr3 = new int[a][b];
	    for(int k=0;k<a;k++){
	            for(int n=0;n<b;n++){
	                arr1[k][n]=input.nextInt();
	            }
	        }
	    for(int k=0;k<a;k++){
	            for(int n=0;n<b;n++){
	                arr2[k][n]=input.nextInt();
	            }
	        }
	        
	    for(int k=0;k<a;k++){
	            for(int n=0;n<b;n++){
	                arr3[k][n]=arr1[k][n]+arr2[k][n];
	            }
	        }
	    for(int k=0;k<a;k++){
	            for(int n=0;n<b;n++){
	                out.printf("%d ",arr3[k][n]);
	            }
	        out.println("");
	        }
	}
}
