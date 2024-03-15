import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int paper_color_count= input.nextInt();
	    int[][] paper = new int[100][100];
	    for(int i=0;i<100;i++){
	        for(int k=0;k<100;k++){
	            paper[i][k]=0;
	        }
	    }
	    
	    for(int i=0;i<paper_color_count;i++){
	        int x=input.nextInt();
	        int y=input.nextInt();
	        for(int n=0;n<10;n++){
	            for(int k=0;k<10;k++){
	                paper[100-(10+y)+n][k+x]=1;
	        }
	    }
	    }
	    
	    int extent=0;
	    for(int i=0;i<100;i++){
	        for(int k=0;k<100;k++){
	            if(paper[i][k]==1)
	                extent++;
	        }
	    }
	    out.println(extent);
	}
}
