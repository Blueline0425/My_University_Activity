import static java.lang.System.out;
import java.util.*;
import java.util.Arrays;
import java.util.Collections;
public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		float sub_sum=0;
		float cla=0;
		String[][] subject = new String[20][3];
		for(int i=0;i<20;i++){
		    String str=input.nextLine();
		    String[] spl = str.split(" ");
		    if(spl[2].equals("A+")){
		        sub_sum+=Float.parseFloat(spl[1])*4.5;
		        cla+=Float.parseFloat(spl[1]);
		    }
		    else if(spl[2].equals("A0")){
		        sub_sum+=Float.parseFloat(spl[1])*4.0;
		        cla+=Float.parseFloat(spl[1]);
		    }
		    else if(spl[2].equals("B+")){
		        sub_sum+=Float.parseFloat(spl[1])*3.5;
		        cla+=Float.parseFloat(spl[1]);
		    }
		    else if(spl[2].equals("B0")){
		        sub_sum+=Float.parseFloat(spl[1])*3.0;
		        cla+=Float.parseFloat(spl[1]);
		    }
		    else if(spl[2].equals("C+")){
		        sub_sum+=Float.parseFloat(spl[1])*2.5;
		        cla+=Float.parseFloat(spl[1]);
		    }
		    else if(spl[2].equals("C0")){
		        sub_sum+=Float.parseFloat(spl[1])*2.0;
		        cla+=Float.parseFloat(spl[1]);
		    }
		    else if(spl[2].equals("D+")){
		        sub_sum+=Float.parseFloat(spl[1])*1.5;
		        cla+=Float.parseFloat(spl[1]);
		    }
		    else if(spl[2].equals("D0")){
		        sub_sum+=Float.parseFloat(spl[1])*1.0;
		        cla+=Float.parseFloat(spl[1]);
		    }
		    else if(spl[2].equals("F")){
		        sub_sum+=Float.parseFloat(spl[1])*0.0;
		        cla+=Float.parseFloat(spl[1]);
		    }
		}
		out.println(sub_sum/cla);
	}
}
