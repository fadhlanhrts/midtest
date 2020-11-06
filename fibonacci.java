
public class Fibonacci {                    //The class will be called fibonacci
    static int fib(int num) {               //Initializing a function for counting fibonacci
        if (num <= 1)                       //If the number is less than or equal to 1 it will return 1
            return num;
        return fib(num - 1) + fib(num - 2);         //If it is greater than one then it will count the fibonacci series
    }                                                       //The function will be using recursion to count the value
    public static void main(String[] args){
        int num=3;                              //Here the number is inserted
        System.out.println(fib(num));           //The value is printed
    }
}
