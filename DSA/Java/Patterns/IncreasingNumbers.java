package com.shrey.basics.patterns;

/*
Print
1
12
123
1234
12345
 */
import java.util.Scanner;

public class IncreasingNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n :");

        int n = sc.nextInt();
        for(int i = 0 ;i<n;i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(j+1);
            }
            System.out.println();

        }


    }
}
