namespace WorldOfAnimals.Models;

public abstract class Carnivore : Animal
{
    public Carnivore(string name) : base(name) {}

    public override void ShowInfo()
    {
        Console.WriteLine($"Carnivore: {Name}");
    }

    public virtual void Eat(Herbivore herbivore)
    {
        Console.WriteLine($"{Name} eats {herbivore.Name}");
    }
}
