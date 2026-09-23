using System;

// Base Class
class Animal
{
    public virtual void Sound()
    {
        Console.WriteLine("Animal makes a sound");
    }
}


// Derived Class - Dog
class Dog : Animal
{
    public override void Sound()
    {
        Console.WriteLine("Dog barks");
    }
}


// Derived Class - Cat
class Cat : Animal
{
    public override void Sound()
    {
        Console.WriteLine("Cat meows");
    }
}


// Calculator Class
class Calculator
{
    // Method Overloading
    public int Add(int a, int b)
    {
        return a + b;
    }

    public int Add(int a, int b, int c)
    {
        return a + b + c;
    }
}


// Main Program
class Program5
{
    static void Main()
    {
        // Polymorphism using Base Class Reference
        Animal myAnimal;

        myAnimal = new Dog();
        myAnimal.Sound();

        myAnimal = new Cat();
        myAnimal.Sound();


        // Method Overloading
        Calculator calc = new Calculator();

        Console.WriteLine("\nAddition of 2 numbers: " + calc.Add(5, 10));

        Console.WriteLine("Addition of 3 numbers: " + calc.Add(5, 10, 15));
    }
}