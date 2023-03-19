using System;
namespace labsemana1_ejercicio6.EXT
{
    class jugador{
        private string _clase="";
        private string _nombre="";
        private int _vida=0;
        private int _poder=0;
        private int _velocidad=0;
        public jugador(){

        }
        public jugador(string clase,string nombre,int vida, int poder, int velocidad){
            this._clase=clase;
            this._nombre=nombre;
            this._vida=vida;
            this._poder=poder;
            this._velocidad=velocidad;
        }
        public string clase
        {
            get{return this._clase;}
            set{this._clase=value;}
        }
        public string Nombre
        {
            get{return this._nombre;}
            set{this._nombre=value;}
        }
        public int Vida
        {
            get{return this._vida;}
            set{this._vida=value;}
        }
        public int Poder
        {
            get{return this._poder;}
            set{this._poder=value;}
        }
        public int Velocidad
        {
            get{return this._velocidad;}
            set{this._velocidad=value;}
        }
        public void Descansar(){
            Console.WriteLine("has tomado una siesta, generando que se te suman 50 puntos de vida");
            Console.WriteLine("Que extraño...");
            _vida+=50;
        }
        public void Atacar(int x){
            Console.WriteLine($"has atacado a alguien, causandole un {x} de daño");
        }
        public override string ToString()
        {
            return "Clase:"+_clase+" Nombre: "+ _nombre + " Vida: "+ _vida + " Poder: " + _poder + " Velocidad: " + _velocidad;
        }
    }
}