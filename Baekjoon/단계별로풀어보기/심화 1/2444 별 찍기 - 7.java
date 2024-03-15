import static java.lang.System.out;
import java.util.*;
import java.util.Arrays;
import java.util.Collections;
public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int N=input.nextInt();
		for(int i=0;i<2*N-1;i++){
		    if(i<N-1){
		        int star_num=2*i+1;
		        int blank_num=N-1-i;
		        for(int k=0;k<blank_num;k++)
		            out.printf(" ");
		        for(int k=0;k<star_num;k++)
		            out.printf("*");
		        out.printf("%n");
		    }
		    else if(i>N-1){
		        int star_num=2*N-1 -2*(i-N+1);
		        int blank_num=i-N+1;
		        for(int k=0;k<blank_num;k++)
		            out.printf(" ");
		        for(int k=0;k<star_num;k++)
		            out.printf("*");
		        out.printf("%n");
		    }
		    
		    else if(i==N-1){
		        int star_num=2*i+1;
		        for(int k=0;k<star_num;k++)
		            out.printf("*");
		            out.printf("%n");
		    }
		}
	}
}
