using System;

class Student
{
    // Fields
    public int rollNo;
    public string name;
    public float marks;

    // Constructor
    public Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    // Method
    public void Display()
    {
        Console.WriteLine("Roll No: " + rollNo);
        Console.WriteLine("Name: " + name);
        Console.WriteLine("Marks: " + marks);
    }
}

class Program4
{
    static void Main()
    {
        // Creating Student Objects
        Student s1 = new Student(1, "Rahul", 85.5f);
        Student s2 = new Student(2, "Priya", 92.0f);

        // Display Student Details
        s1.Display();

        Console.WriteLine();

        s2.Display();
    }
}