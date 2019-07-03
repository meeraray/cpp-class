import java.util.Scanner;

public class Pascal {
	public static void main(String[] args) {
		Scanner sc = new Scanner();
		int row = sc.nextInt();
		row;
		for(int i = 0; i < row; i++) {
			if(i == 0) {
				System.out.println(1);
				continue;
			}
			if(i == 1) {
				System.out.println("1 1");
				continue;
			}
			int numElements = i + 1;
			for(int j = 0; j < numElements; j++) {
				system.out.println("a");
			}
		}
	}
}