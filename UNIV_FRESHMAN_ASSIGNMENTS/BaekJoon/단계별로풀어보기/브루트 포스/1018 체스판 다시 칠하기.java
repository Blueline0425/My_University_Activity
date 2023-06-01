import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		int[][] narr=new int[n][m];
		for(int i=0;i<n;i++){
		    String str = scanner.nextLine();
		    for(int k=0;k<m;k++){
		        if(str.charat(k)=="W")//white는 0으로 black은 1로 치환 후 보드판 비교 후 0과 1의 비율이 최대한 높을 때가 최적의 수 
		            narr[i][k]=0;
		        else
		            narr[i][k]=1;
		    }
		}
		
		
		
	}
}
