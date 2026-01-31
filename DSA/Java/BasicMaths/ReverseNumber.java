package com.shrey.basics.basicMaths;

import java.util.Scanner;

public class ReverseNumber {
    public static int reverseNumber(int n){
        int revNum = 0;
        while(n>0){
            int lastDigit = n%10;
            revNum = revNum*10 + lastDigit;

            n = n/10;
        }

        return revNum;
    }

    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number : ");
        num = sc.nextInt();

        System.out.println("Reverse of the given number is : " + reverseNumber(num));
    }
}
