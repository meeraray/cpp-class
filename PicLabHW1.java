/*
Ronuk Ray
12/20/18
Period 1

PicLabHW1
*/

public class PicLabHW1 {
	public static void main(String[] args) {
		
	}
	
	//1)
	public int getCount(int n) {
		int n = 0;
		for(int[] row : matrix) {
			for(int c : row) {
				if(c == n) {
					n++;
				}
			}	
		}
		return n;
	}
	
	//2)
	public int getLargest() {
		int max = 0;
		for(int[] row : matrix) {
			for(int c : row) {
				if(c > max) {
					max = c;
				}
			}	
		}
		return max;
	}
	
	//3)
	public int getColTotal(int colN) {
		int total = 0;
		for(int row = 0; row < matrix.length; row++) {
			for(int col = 0; col < row[0].length; col++) {
				if(col == colN) {
					total += matrix[row][col];
				}
			}
		}
		return total;
	}
}