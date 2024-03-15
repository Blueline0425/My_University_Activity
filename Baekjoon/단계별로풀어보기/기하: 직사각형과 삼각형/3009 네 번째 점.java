import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int[] arrx = new int[3];
		int[] arry = new int[3];
		int lx,ly;
		for(int i=0;i<3;i++){
		    int x = input.nextInt();
		    int y = input.nextInt();
		    arrx[i]=x;
		    arry[i]=y;
		}
		int a=arrx[0];
		int b=arry[0];
		    if(a==arrx[1]){
		        lx=arrx[2];
		    }
		    else{
		        if(a==arrx[2]){
		            lx=arrx[1];
		        }
		        else{
		            lx=a;
		        }
		    }
		if(b==arry[1]){
		        ly=arry[2];
		    }
		    else{
		        if(b==arry[2]){
		            ly=arry[1];
		        }
		        else{
		            ly=b;
		        }
		    }
		
		
		out.printf("%d %d",lx,ly);
	}
}
