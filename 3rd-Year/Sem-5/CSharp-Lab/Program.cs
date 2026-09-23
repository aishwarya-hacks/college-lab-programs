using System;

class Program1
{
    static void Main()
    {
        // 1. Data Types
        int a = 10;
        float b = 5.5f;
        double c = 15.75;
        char ch = 'A';
        bool flag = true;
        string name = "BCA Student";

        Console.WriteLine("DATA TYPES");
        Console.WriteLine("Integer: " + a);
        Console.WriteLine("Float: " + b);
        Console.WriteLine("Double: " + c);
        Console.WriteLine("Char: " + ch);
        Console.WriteLine("Boolean: " + flag);
        Console.WriteLine("String: " + name);


        // 2. Arithmetic Operators
        int x = 20;
        int y = 6;

        Console.WriteLine("\nARITHMETIC OPERATIONS");
        Console.WriteLine("Addition: " + (x + y));
        Console.WriteLine("Subtraction: " + (x - y));
        Console.WriteLine("Multiplication: " + (x * y));
        Console.WriteLine("Division: " + (x / y));
        Console.WriteLine("Modulus: " + (x % y));


        // 3. Relational Operators
        Console.WriteLine("\nRELATIONAL OPERATIONS");
        Console.WriteLine("x > y: " + (x > y));
        Console.WriteLine("x == y: " + (x == y));


        // 4. Logical Operators
        bool p = true;
        bool q = false;

        Console.WriteLine("\nLOGICAL OPERATIONS");
        Console.WriteLine("p && q: " + (p && q));
        Console.WriteLine("p || q: " + (p || q));
        Console.WriteLine("!p: " + (!p));
    }
}