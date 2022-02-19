using System;
using System.Threading;
using System.Threading.Tasks;

namespace AsyncAwait
{
    public static class Programm
    {
        public static void Main()
        {
            Console.WriteLine("Начало");
            try
            {
                DandTAsync();
            }
            catch (Exception e)
            {

                Console.WriteLine("Нашел ошибку!" + e);
            }
            Console.WriteLine("Конец!");
            Console.ReadLine();
        }

        private async static void DandTAsync()
        {
            await Task.Delay(100);
            throw new InvalidOperationException();
        }
    }

}
