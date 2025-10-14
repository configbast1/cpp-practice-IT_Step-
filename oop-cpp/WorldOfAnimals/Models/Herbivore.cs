namespace WorldOfAnimals.Models;

public abstract class Herbivore : Animal
{
    public Herbivore(string name) : base(name) {}

    public override void ShowInfo()
    {
        Console.WriteLine($"Herbivore: {Name}");
    }
}
