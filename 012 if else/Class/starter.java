	import java.util.Scanner;
	import java.util.Random;      // Acessing Random library

	
	class starter {
		public static void main(String[] args){
		
		int x;               // Constructing x
		int y;
		int z;
		Random rand;   // Constructing rand
		rand = new Random();    // Declare
		x = 5;       //Declaring x 
		x = rand.nextInt(46);    // 0 - 45
		
		
		// 5 - 50
		
		// 10 - 65
		
		
		x = rand.nextInt(56) + 10;    
		// 10 - 65
		// 65 - 10 
		x = rand.nextInt(56);   // 0 - 55
		                 // 10 - 65
		x = x + 10;
		
		
		double a;
		a = 0;
		a = rand.nextDouble(); // 0 - 1, not 1 
		System.out.println(a);
		                        //  12.5 - 13.5
		a = a + 12.5;
		System.out.println(a);
		
		
		
		
		
		
		// 35.3 - 36.3
		// 0 - 1
		
		double b;
		b = rand.nextDouble();
		System.out.println(b);
		b = b + 35.3;
		
		
		
	// double between 5 - 205 
	// 0 - 200
	    double c;
	    c = rand.nextInt(200);    // 0 - 199
	    System.out.println(c);
	    c = c + 5;   // 5-204
	    System.out.println;
	    c = c + rand.nextDouble();
	    System.out.println(c);
	    
	    
	     
	    
	    c = rand.nextDouble();
	    System.out.println(c);
		c = c + 5;
		System.out.println(c);
	

	
	    
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	}

}



