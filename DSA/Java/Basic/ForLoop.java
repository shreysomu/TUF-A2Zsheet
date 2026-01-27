package com.shrey.basics.basics1;

import java.util.Scanner;

//Printing 1 to n number
public class ForLoop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of N : ");

        int n = sc.nextInt();
        for (int i = 1 ;i<=n;i++){
            System.out.println(i);
        }
    }
}
