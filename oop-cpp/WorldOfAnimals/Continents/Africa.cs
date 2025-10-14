using WorldOfAnimals.Models;

namespace WorldOfAnimals.Continents;

public class Africa : Continent
{
    public Africa() : base("Africa") {}

    public override Herbivore CreateHerbivore()
    {
        return new Antelope();
    }

    public override Carnivore CreateCarnivore()
    {
        return new Lion();
    }
}
