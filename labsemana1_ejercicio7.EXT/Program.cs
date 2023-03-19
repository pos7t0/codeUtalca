// See https://aka.ms/new-console-template for more information
using System;
namespace labsemana1_ejercicio7.EXT
{
    class Program{
        static void Main(string[] args)
        {
            Vehiculo auto1=new Vehiculo("Toyota","Yaris",2000,50.02,80);
            Vehiculo auto2=new Vehiculo("Tesla","Tesla model s",1980,80,49.90);
            Vehiculo auto3=new Vehiculo("Hyundai","New Kona Eléctrico",2018,75,65.3);
            Console.WriteLine(auto1.ToString());
            Console.WriteLine(auto2.ToString());
            Console.WriteLine(auto3.ToString());
        }
    }
}
