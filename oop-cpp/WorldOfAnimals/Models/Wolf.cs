namespace WorldOfAnimals.Models;

public class Wolf : Carnivore
{
    public Wolf() : base("Wolf") { }

    public override void Eat(Herbivore herbivore)
    {
        Console.WriteLine($"Wolf bites and eats {herbivore.Name}!");
    }
}
