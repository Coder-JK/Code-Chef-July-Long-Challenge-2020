/* Author : Jeet Kansagara */
/* Contest Code : JULY20B */

import java.util.Scanner;
import java.util.HashSet;

class PTMSSNG {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		while(t-- > 0) {
			int n = input.nextInt();
			HashSet<Integer> xaxis = new HashSet<>();
			HashSet<Integer> yaxis = new HashSet<>();

			for(int i=0; i<4*n-1; i++) {
				int x = input.nextInt();
				int y = input.nextInt();

				if(xaxis.contains(x)) {
					xaxis.remove(x);
				} else {
					xaxis.add(x);
				}

				if(yaxis.contains(y)) {
					yaxis.remove(y);
				} else {
					yaxis.add(y);
				}
			}
			for(int a : xaxis) {
				for (int b : yaxis) {
					System.out.println(a + " " + b);
				}
			}
		}
	}
}
