import static java.lang.System.out;
import java.util.*;
import java.math.BigInteger;
public class Main
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    int[] n = new int[10000];
	    String[] st = new String[10000];
	    int m=0;
	    while(true){
	    int N = input.nextInt();
	    if(N==-1){
	            break;
	        }
	    else{
	        n[m]=N;
	        m++;
	    }
	    }
	    for(int g=0;g<m;g++){
	    
	    
	    int[] arr = new int[100000];
	    for(int i=0;i<100000;i++){
	        arr[i]=0;
	    }   
	    int li=0;
	    int sum=0;
	    for(int i=1;i<=100000;i++){
	        
	        if(n[g]%i==0){
	            arr[li]=i;
	            li++;
	            sum+=i;
	        }
	    }     
	    String[] ch = new String[li];
	    String o = new String("");
	    int count=0;
	    for(int i=0;i<100000;i++){
	        if(arr[i]!=0){
	            ch[count]=Integer.toString(arr[i]);
	            o+=ch[count]+" + ";
	            count++;
	        }
	    }
	    
	    if(sum-Integer.parseInt(ch[count-1])==n[g]){
	        st[g] = Integer.toString(n[g])+" = ";
	        for(int i=0;i<count-1;i++){
	            st[g]+=ch[i];
	           if(i!=count-2)
	                st[g]+=" + ";
	        }
	        
	        
	    }
	    else{
	        st[g]=Integer.toString(n[g])+" is NOT perfect.";
	    }
	 }
	 for(String k : st){
	     if(k!=null)
	        out.println(k);
	 }
    }
}
