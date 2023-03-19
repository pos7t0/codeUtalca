// See https://aka.ms/new-console-template for more information
using System;
namespace labsemana1_ejercicio6.EXT
{
    class Program{
        static void Main(string[] args)
        {
            string _clase="Hechizero";
            string _nombre="Rodrigo";
            int _vida=450;
            int _poder=45;
            int _velocidad=78;
            jugador pl1=new jugador(_clase,_nombre,_vida,_poder,_velocidad);
            Console.WriteLine(pl1.ToString());
            pl1.Descansar();
            Console.WriteLine(pl1.ToString());
            pl1.Atacar(_poder);

        }

    }
}
