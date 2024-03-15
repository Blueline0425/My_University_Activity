import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int x = input.nextInt();
		int y = input.nextInt();
		int w = input.nextInt();
		int h = input.nextInt();
		
		int[] arr = new int[]{x,y,w-x,h-y};
		int min = 9999;
		for(int i : arr){
		    if(i<min){
		        min=i;
		    }
		}
		out.println(min);
	}
}
