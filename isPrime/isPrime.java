import java.util.Scanner;
import java.lang.Math;

public class isPrime{
    public static boolean isPrime(int n){
        if(n<3)return true;
        if(n%2==0)return false;
        for(int i=3;i<Math.pow(n,0.5)+1;i+=2){
            if(n%i==0)return false;
        }
        return true;
    }
    public static void main(String[] args){
    
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int in = sc.nextInt();

        if(isPrime(in)){
            System.out.println(in + " is prime.");
        }else{
            System.out.println(in + " is not prime.");
        }
    }
}
