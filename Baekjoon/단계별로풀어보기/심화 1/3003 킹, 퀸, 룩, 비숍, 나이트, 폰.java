import static java.lang.System.out;
import java.util.*;
import java.util.Arrays;
import java.util.Collections;
public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int[] arr=new int[6];
		int[] arr_compare={1,1,2,2,2,8};
		for(int i=0;i<6;i++){
		    int chess = input.nextInt();
		    arr[i]=chess;
		}
		for(int i=0;i<6;i++){
		    out.printf("%d ",arr_compare[i]-arr[i]);
		}
	}
}
