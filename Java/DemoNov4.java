package unl.cse;
import java.math.BigInteger;
import java.util.HashMap;
import java.util.Map;

public class demoNov3 {
  //hash map is really strong to calcualte this kind of staffs
  public static Map<Integer, BigInteger> m = new HashMap<>();
  static{
    m.put(0, BigInteger.ONE);
    m.put(1, BigInteger.ONE);
  }
  //List and sets are better?
  //Aribritary large number 2^{63}-1? higer than long?


  public static BigInteger fibonacciMap(int n){
    if (m.containsKey(n)){
      return m.get(n);
    } else {
      BigInteger aa = fibonacciMap(n-1);
      BigInteger bb = fibonacciMap(n-2);
      BigInteger results = aa.add(bb);
      m.put(n,results);
      return results;
    }

  }


  public static BigInteger fibonacci(int n){
    if (n == 0 || n == 1){
      return BigInteger.ONE;
    } else {
      BigInteger a = fibonacci(n-1);
      BigInteger b = fibonacci(n-2);
      BigInteger result = a.add(b);
      return result;
    }

  }
  public static void main(String args[]){
      int n = 6000;
      BigInteger result = fibonacciMap(n);
      System.out.println(result);
    }

}
