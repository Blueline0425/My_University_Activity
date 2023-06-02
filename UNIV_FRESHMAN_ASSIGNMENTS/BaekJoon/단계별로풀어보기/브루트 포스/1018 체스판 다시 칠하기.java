import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		int[][] narr_Nmatch = new int[(n-7)*(m-7)][2];
		for(int i=0;i<(n-7)*(m-7);i++){
		    for(int k=0;k<2;k++)
		        narr_Nmatch[i][k]=0;
		}
		int[][] narr=new int[n][m];
		int[][] chess_b={{1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		};
		int[][] chess_w={{0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                
		};
		
		for(int i=0;i<n;i++){
		    String str = new String();
		    str = scanner.next();
		    String[] A = str.split("");
		    for(int k=0;k<m;k++){
		        if(A[k].equals("W"))//white는 0으로 black은 1로 치환 후 보드판 비교 후 0과 1의 비율이 최대한 높을 때가 최적의 수 
		            narr[i][k]=0;
		        else
		            narr[i][k]=1;
		    }
		}
		
		
		
		
		
	int count=0;
		for(int i=0;i<n-7;i++){//n*m 보드판에서 8*8 chess_w와 chess_b의 0과 1 매칭률 비교 후 매칭률의 최대값을 구하는 식 작성.
		  //비교횟수는 n-7 * m-7
		  for(int k=0;k<m-7;k++){
		      int w=0;
		      int b=0;
		      if(narr[i][k]==0){//w일때
		                    for(int a=0;a<8;a++){//체스판 비교
		                        for(int l=0;l<8;l++){
		                            if(narr[i+a][k+l]!=chess_w[a][l]){//w==b일때
		                                narr_Nmatch[count][0]++;
		                            }
		                            if(narr[i+a][k+l]!=chess_b[a][l]){//w==w일때
		                                narr_Nmatch[count][1]++;
		                            }
		                        }
		                     }
		    }
		    else{//b일때
		                  for(int a=0;a<8;a++){//체스판 비교
		                        for(int l=0;l<8;l++){
		                            if(narr[i+a][k+l]!=chess_b[a][l]){//b==w일때
		                                narr_Nmatch[count][0]++;
		                            }
		                            if(narr[i+a][k+l]!=chess_w[a][l]){//b==b일때
		                                narr_Nmatch[count][1]++;
		                            }
		                        }
		                     }
		      
		      }
		  count++;
		}
		
		}
	int chess_min=99999;
	for(int f=0;f<(n-7)*(m-7);f++){
		    for(int k=0;k<2;k++)
		        if(narr_Nmatch[f][k]<chess_min)
	                chess_min=narr_Nmatch[f][k];
		}
	out.println(chess_min);
    
}
}
