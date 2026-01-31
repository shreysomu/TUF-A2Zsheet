package com.shrey.basics.basicMaths;

import java.util.Scanner;

public class CheckPalindrome {
    public static boolean checkPalindrome(int n){
        int revNum = 0;
        int number = n;

        while(n>0){
            int lastDigit = n%10;
            revNum = revNum*10+lastDigit;
            n/=10;
        }

        return revNum == number;
    }

    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number : ");
        num = sc.nextInt();

        if(checkPalindrome(num))
            System.out.println(num +" is a palindrome number .");
        else
            System.out.println(num + " is not a palindrome number.");
    }
}
