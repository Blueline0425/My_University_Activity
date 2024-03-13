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
		    narr[i]=0;
		}
		
		for(int a=0;a<m;a++){
		    int i,j,k;
		    i=scanner.nextInt();
		    j=scanner.nextInt();
		    k=scanner.nextInt();
		    for(int q=i;q<=j;q++){
		        narr[q-1]=k;
		    }
		}
		for(int i:narr)
		    out.printf("%d ",i);
    scanner.close();
	}
}
