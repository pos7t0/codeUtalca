using System;
namespace labsemana1_ejercicio7.EXT
{
    class Vehiculo{
        private string _fabricante="";
        private string _modelo="";
        private int _anio=0;
        private double _velocidad=0;
        private double _maniobrabilidad=0;
        public Vehiculo(){

        }
        public Vehiculo(string fabricante,string modelo,int anio,double velocidad,double maniobrabilida){ 
            this._fabricante=fabricante;
            this._modelo=modelo;
            this._anio=anio;
            this._velocidad=velocidad;
            this._maniobrabilidad=maniobrabilida;
        }
        public string Fabricante
        {
            get{return this._fabricante;}
            set{this._fabricante=value;}
        }
        public string Modelo
        {
            get{return this._modelo;}
            set{this._modelo=value;}
        }
        public int Anio
        {
            get{return this._anio;}
            set{this._anio=value;}
        }
        public double Velocidad
        {
            get{return this._velocidad;}
            set{this._velocidad=value;}
        }
        public double Maniobrabilidad
        {
            get{return this._maniobrabilidad;}
            set{this._maniobrabilidad=value;}
        }
        public override string ToString()
        {
            return "Fabricante: "+_fabricante+" Modelo: "+_modelo+" Año: "+_anio+" Velocidad: "+_velocidad+"% Maniobrabilidad: "+_maniobrabilidad+"%";
        }
    }
}