import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int N = input.nextInt();
		int cross=1;
		int li=2;
		int sum=1;
		int sum_pre=1;
		while(N>sum){
		    sum_pre=sum;
		    sum+=li;
		    li++;
		    cross++;
		    
		}
		int a,b;
		if(cross%2==0){
		    a=N-sum_pre;
		    b=cross+1-a;
		}
		else{
		    if(cross==1){
		        out.printf("1/1");
		        System.exit(0);
		    }
		    a=cross+1-(N-sum_pre);
		    b=cross+1-a;
		}
		out.printf("%d/%d",a,b);
	}
}
