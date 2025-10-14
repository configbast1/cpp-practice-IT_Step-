using WorldOfAnimals;
using WorldOfAnimals.Continents;

class Program
{
    static void Main()
    {
        var world = new World();
        world.AddContinent(new Africa());
        world.AddContinent(new NorthAmerica());

        world.Simulate();
    }
}
