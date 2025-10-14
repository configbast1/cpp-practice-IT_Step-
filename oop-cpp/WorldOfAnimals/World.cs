using WorldOfAnimals.Continents;
using WorldOfAnimals.Models;

namespace WorldOfAnimals;

public class World
{
    private readonly List<Continent> _continents = new();

    public void AddContinent(Continent continent)
    {
        _continents.Add(continent);
    }

    public void Simulate()
    {
        foreach (var continent in _continents)
        {
            Console.WriteLine($"\n--- {continent.Name} ---");

            Herbivore herbivore = continent.CreateHerbivore();
            Carnivore carnivore = continent.CreateCarnivore();

            herbivore.ShowInfo();
            carnivore.ShowInfo();
            carnivore.Eat(herbivore);
        }
    }
}
