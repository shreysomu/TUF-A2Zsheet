package com.shrey.basics.patterns;

import java.util.Scanner;
/*
print below
1
22
333
4444
 */
public class Pattern3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n :");

        int n = sc.nextInt();
        for(int i = 0 ;i<n;i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(i);
            }
            System.out.println();

        }


    }
}
