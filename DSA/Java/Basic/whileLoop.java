package com.shrey.basics.basics1;

import java.util.Scanner;

//printing factorial
public class whileLoop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n : ");

        int n = sc.nextInt();
        int fact = 1;

        while(n>0){
            fact = fact*n;
            n--;
        }

        System.out.println("Factorial of given number is "+ fact);
    }
}
