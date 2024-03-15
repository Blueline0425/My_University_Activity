import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int T =input.nextInt();
	    int q=25;
	    int d=10;
	    int n=5;
	    int p=1;
	    int[] tc= new int[T];
	    int[] qs= new int[T];
	    int[] ds= new int[T]; 
	    int[] ns= new int[T]; 
	    int[] ps= new int[T]; 
	    for(int i=0;i<T;i++){
	        tc[i]=input.nextInt();
	        qs[i]=0;
	        ds[i]=0;
	        ns[i]=0;
	        ps[i]=0;
	    }
	    
	    for(int i=0;i<T;i++){
	        
	        int money=tc[i];
	        
	        while(money>=q){
	            money-=q;
	            qs[i]++;
	        }
	        while(money>=d){
	            money-=d;
	            ds[i]++;
	        }
	        while(money>=n){
	            money-=n;
	            ns[i]++;
	        }
	        while(money>=p){
	            money-=p;
	            ps[i]++;
	        }
	    }
	    for(int i=0;i<T;i++){
	        out.printf("%d %d %d %d\n",qs[i],ds[i],ns[i],ps[i]);
	    }
	}
}
