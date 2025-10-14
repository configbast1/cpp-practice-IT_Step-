using WorldOfAnimals.Models;

namespace WorldOfAnimals.Continents;

public class NorthAmerica : Continent
{
    public NorthAmerica() : base("North America") {}

    public override Herbivore CreateHerbivore()
    {
        return new Bison();
    }

    public override Carnivore CreateCarnivore()
    {
        return new Wolf();
    }
}
