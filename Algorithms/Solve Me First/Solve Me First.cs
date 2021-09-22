using System;

class Solution{
    
    static int add(int a, int b){
        return a + b;
    }
    
    static void Main(String[] args){
        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int sum = add(a, b);
        Console.WriteLine(sum);
    }
    
}
