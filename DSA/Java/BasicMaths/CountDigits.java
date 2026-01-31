package com.shrey.basics.basicMaths;

import java.util.Scanner;

public class CountDigits {
    public static int CountDigit(int n){

        int count = 0;

        while(n>0){
            count++;
            n = n/10;
        }

        return count;
    }

    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number : ");
         num = sc.nextInt();

        System.out.println("Total number of digits in the given number is : " + CountDigit(num));
    }
}
