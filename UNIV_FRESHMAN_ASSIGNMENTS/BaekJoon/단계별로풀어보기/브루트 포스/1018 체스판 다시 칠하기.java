import static java.lang.System.out;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		int[] narr_Nmatch = new int[(n-8)*(m-8)];
		for(int i=0;i<(n-8)*(m-8);i++){
		    narr_Nmatch[i]=0;
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
		int[][] chess_match=new int[8][8];
		for(int i=0;i<n;i++){
		    String str = scanner.nextLine();
		    for(int k=0;k<m;k++){
		        char a=str.charAt(k);
		        String A=String.valueOf(a);
		        if(A.equals("W"))//white는 0으로 black은 1로 치환 후 보드판 비교 후 0과 1의 비율이 최대한 높을 때가 최적의 수 
		            narr[i][k]=0;
		        else
		            narr[i][k]=1;
		    }
		}
		int count=0;
		for(int i=0;i<n-8;i++){//n*m 보드판에서 8*8 chess_w와 chess_b의 0과 1 매칭률 비교 후 매칭률의 최대값을 구하는 식 작성.
		  //비교횟수는 n-8 * m-8
		  for(int k=0;k<m-8;k++){
		      if(narr[i][k]==0){
		                    for(int a=0;a<8;a++){//체스판 비교
		                        for(int l=0;l<8;l++){
		                            if(narr[i+a][k+l]!=chess_w[a][l]){
		                                narr_Nmatch[count]++;
		                            }
		                        }
		                     }
		    }
		    else{
		                  for(int a=0;a<8;a++){//체스판 비교
		                        for(int l=0;l<8;l++){
		                            if(narr[i+a][k+l]!=chess_b[a][l]){
		                                narr_Nmatch[count]++;
		                            }
		                        }
		                     }
		      
		      }
		  count++;
		}
		
		
	}
	int chess_min=99999;
	for(int i : narr_Nmatch){
	    if(i<chess_min)
	        chess_min=i;
	}
	
	out.println(chess_min);
    }
}
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		int white_match, black_match, 
		int[]atch = new int[(n-8)*(m-8)];
		int[][] narr=new int[n][m];
		int[][] chess_b={{1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		}
		int[][] chess_w={{0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                 {0,1,0,1,0,1,0,1},
		                 {1,0,1,0,1,0,1,0},
		                
		}
		int[][] chess_match=new int[8][8];
		for(int i=0;i<n;i++){
		    String str = scanner.nextLine();
		    for(int k=0;k<m;k++){
		        if(str.charat(k)=="W")//white는 0으로 black은 1로 치환 후 보드판 비교 후 0과 1의 비율이 최대한 높을 때가 최적의 수 
		            narr[i][k]=0;
		        else
		            narr[i][k]=1;
		    }
		}
		
		for(int i=0;i<n-8;i++){//n*m 보드판에서 8*8 chess_w와 chess_b의 0과 1 매칭률 비교 후 매칭률의 최대값을 구하는 식 작성.
		  //비교횟수는 n-8 * m-8
		  for(int k=0;k<m-8;k++){
		      if(narr[i][l]==0){
		                    for(int n=0;n<8;n++){//체스판 비교
		                        for(int l=0;l<8;l++){
		                            if(narr[i+n][k+l]!=chess_w[n][l]){
		                                
		                            }
		                        }
		                     }
		              
		              else{
		                  for(int n=0;n<8;n++){//체스판 비교
		                        for(int l=0;l<8;l++){
		              
		                        }
		                  }
		      
		      }
		  }
		}
		
		
	}
}
