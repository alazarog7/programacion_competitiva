import java.math.BigInteger;
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int a = 1;
		int b = 1;
		int t = 1;
		while(cin.hasNext()) {
			t = cin.nextInt();
			a = cin.nextInt();
			b = cin.nextInt();
			if(a >= b && b!=0 &&t!=1) {
				if(a!=b) {
					if((a-b)*Math.log10(t)+1<100) {
						BigInteger dividendo = BigInteger.valueOf(t);
						dividendo = dividendo.pow(a).subtract(BigInteger.ONE);
						BigInteger divisor   = BigInteger.valueOf(t);
						divisor = divisor.pow(b).subtract(BigInteger.ONE);
						if(dividendo.mod(divisor).equals(BigInteger.ZERO)) {
							System.out.println("("+t+"^"+a+"-1)/("+t+"^"+b+"-1) "+dividendo.divide(divisor).toString());
						}else {
							System.out.println("("+t+"^"+a+"-1)/("+t+"^"+b+"-1) is not an integer with less than 100 digits.");
						}
					}else {
						System.out.println("("+t+"^"+a+"-1)/("+t+"^"+b+"-1) is not an integer with less than 100 digits.");
					}
				}else {
					System.out.println("("+t+"^"+a+"-1)/("+t+"^"+b+"-1) 1");
				}
				
			}else  {
				System.out.println("("+t+"^"+a+"-1)/("+t+"^"+b+"-1) is not an integer with less than 100 digits.");
			}
		}
		

	}
}

