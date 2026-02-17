package com.shrey.basics.basicMaths;

import java.util.Scanner;

public class IsArmstrongNumber {
    public static boolean isArmstrong(int num) {
        int k = String.valueOf(num).length(); // Get number of digits
        int sum = 0;
        int n = num;

        while(n>0){
            int dig = n%10;
            sum = (int) (sum + Math.pow(dig,k));
            n /= 10;
        }

        return sum == num;

    }

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to check it's Armstrong or not :");

        n  =  sc.nextInt();

        if(isArmstrong(n)){
            System.out.println("Entered number is an Armstrong number. ");
        }
        else{
            System.out.println("Entered number is not an armstrong number");
        }
    }
    }
