import static java.lang.System.out;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
		int[] arr = {1,2,3,4,5,6,7,8,9,0};
		for(int i : arr){
		    out.println(i);		}
		    
		Tv t = new Tv();
		Tv t1 = new Tv(300,200,112,30);
		Tv t2 = new Tv(48);
		Tv[] T = new Tv[50];
		
		for(Tv tv : T){
		    int i=0;
		    T[i]= new Tv();
		    
		    i++;
		}
		out.println(t.inch);
		out.println(t1.inch);
		out.println(t2.inch);
		out.println(Tv.sumOfPowers(2,10));
	}
}
class Tv{
    
    static {
        channel=0;
        power=false;
    }
    Tv(){
        width=200;
        height=100;
        inch=42;
        weight=15;
    }
    Tv(int width, int height,int inch,int weight){
        
        this.width=width;
        this.height=height;
        this.inch=inch;
        this.weight=weight;
    }
    Tv(int inch){
        this(200,100,inch,15);
    }
    
    
    int width, height, inch, weight, channel;
    boolean power;
    static String brand = "LG";
    public static int sumOfPowers(int x, int n) {
    if (n == 1) {
        return x;
    } else {
        return (int) Math.pow(x, n) + sumOfPowers(x, n-1);
    }
}

    void power(){
        power=!power;
    }
    void channelup(){
        channel++;
    }
    void channeldown(){
        channel--;
    }
}