using System;

class Program2
{
    static void Main()
    {
        // 1. If-Else Statement: Check Even or Odd
        int num = 15;

        Console.WriteLine("IF-ELSE STATEMENT");

        if (num % 2 == 0)
        {
            Console.WriteLine(num + " is Even");
        }
        else
        {
            Console.WriteLine(num + " is Odd");
        }


        // 2. Switch Case: Grade Calculator
        char grade = 'B';

        Console.WriteLine("\nSWITCH CASE");

        switch (grade)
        {
            case 'A':
                Console.WriteLine("Excellent");
                break;

            case 'B':
                Console.WriteLine("Good");
                break;

            case 'C':
                Console.WriteLine("Average");
                break;

            default:
                Console.WriteLine("Invalid Grade");
                break;
        }


        // 3. For Loop: Print 1 to 10
        Console.WriteLine("\nFOR LOOP:");

        for (int i = 1; i <= 10; i++)
        {
            Console.Write(i + " ");
        }


        // 4. While Loop: Sum of First 5 Numbers
        Console.WriteLine("\n\nWHILE LOOP:");

        int sum = 0;
        int j = 1;

        while (j <= 5)
        {
            sum += j;
            j++;
        }

        Console.WriteLine("Sum of first 5 numbers: " + sum);


        // 5. Do-While Loop
        Console.WriteLine("\nDO-WHILE LOOP:");

        int k = 1;

        do
        {
            Console.Write(k + " ");
            k++;
        }
        while (k <= 5);
    }
}