using WorldOfAnimals.Models;

namespace WorldOfAnimals.Continents;

public abstract class Continent
{
    public string Name { get; set; }

    public Continent(string name)
    {
        Name = name;
    }

    public abstract Herbivore CreateHerbivore();
    public abstract Carnivore CreateCarnivore();
}
