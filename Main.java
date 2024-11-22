import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a num: ");
        int num = sc.nextInt();

        //boolean isPrime = isPrime(number);

        System.out.println(isPrime(num));
    }
  
    public static boolean isPrime(int num){
        if (num <= 1){
            return false;
        }
        boolean isPrime= true;
        for(int i=2;i<=num;i++){
            if(num % i == 0){
                isPrime = false;
            }
        }
        return isPrime;
    }
}