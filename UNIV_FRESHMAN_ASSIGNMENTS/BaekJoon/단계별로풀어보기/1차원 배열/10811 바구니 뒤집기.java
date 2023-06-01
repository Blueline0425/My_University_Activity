import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		int[] narr=new int[n];
		for(int i=0;i<n;i++){
		    narr[i]=i+1;
		}
		
		for(int a=0;a<m;a++){
		    int i,j;
		    i=scanner.nextInt();
		    j=scanner.nextInt();
		    for(int k=0;k<(j-i+1)/2;k++){
		    int tmp;
		    
		    tmp = narr[i-1+k];
		    narr[i-1+k]=narr[j-1-k];
		    narr[j-1-k]=tmp;
		    }
		}
		for(int i:narr)
		    out.printf("%d ",i);
	}
}
