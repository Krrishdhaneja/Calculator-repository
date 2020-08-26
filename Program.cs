using System;

namespace Calculators
{
    class Program
    {
        static void Main(string[] args)
        {
         
         
          Console.WriteLine("what's your first number");
          var h=double.Parse(Console.ReadLine());
         
          Console.WriteLine("what's your second number");
          var g=double.Parse(Console.ReadLine());
         
          var Result=h + g;
        
          Console.WriteLine("after adding the numbers result is:  "    +    Result);
          var Result1=h * g;
        
          Console.WriteLine("after multiplying the result is:  "   +   Result1);
          var result2=h / g;
         
          Console.WriteLine("after dividing numbers the result is:  "   +  result2);
          var result3=h-g;
          Console.WriteLine("after subtracting the result is:  "   +  result3);
        }
    }
}
