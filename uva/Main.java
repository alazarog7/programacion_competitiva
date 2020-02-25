import java.math.BigInteger;
import java.util.Scanner;

class Main {
	
	public static BigInteger[] factoriales = new BigInteger[1001]; 
	
	public static void main(String[] args) {
		
		Scanner cin = new Scanner(System.in);
		BigInteger valor;
		
		allFactorials();
		
		while(cin.hasNext()) {
		   int numero = cin.nextInt();
		   System.out.println(numero+"!");
		   System.out.println(factoriales[numero]);
		}
		
	}
	
	public static void allFactorials() {
		factoriales[0] = BigInteger.ONE;
		for(int i = 1; i< 1001 ; i ++) {
			   factoriales[i] = factoriales[i-1].multiply(BigInteger.valueOf(i));
		}
	}

}

