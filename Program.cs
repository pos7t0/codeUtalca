// See https://aka.ms/new-console-template for more information
using System;
namespace lol{
    class Program{
        static void Main(string[] args)
        {
            int error=0;
            string[] a={"      O      \n","     <","|",">      \n","      ^      \n","     |"," |     \n"};
            error=0;
            Console.WriteLine($"<|");
            do{
                for(int i=0;i<7;i++)
                {
                    if(error+i<7)
                    {
                        if(error==5 && i==1)
                        {
                            Console.Write($"      |");
                        }
                        else Console.Write($"{a[i]}");
                    }
                    
                }
                error++;
                Console.WriteLine("");
                Console.WriteLine("");
            }while(error<=6);
            
            
            
        }
    }
}
