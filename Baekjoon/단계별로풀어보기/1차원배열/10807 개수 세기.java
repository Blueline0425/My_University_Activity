// Online Java Compiler
// Use this editor to write, compile and run your Java code online

import java.util.*;
public class Main {
    public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    String input = scanner.nextLine();
    
    int x = Integer.parseInt(input);
    
    int[] arr= new int[x];
    for(int i=0;i<arr.length;i++){
        arr[i]=scanner.nextInt();

    }
    int num = scanner.nextInt();
    int c = 0;
    for(int tmp: arr){
        c=(tmp==num)? ++c:c; 
    }
    System.out.println(c);
    scanner.close();
}
}
