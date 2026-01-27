package com.shrey.basics.patterns;

import java.util.Scanner;

/*
printing below pattern (ie. n =4)
 * * * *
 * * * *
 * * * *
 * * * *
 */
public class Pattern1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n :");

        int n = sc.nextInt();
        for(int i = 0 ;i<n;i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("* ");
            }
            System.out.println();

        }


    }
}
