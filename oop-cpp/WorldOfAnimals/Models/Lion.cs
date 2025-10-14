namespace WorldOfAnimals.Models;

public class Lion : Carnivore
{
    public Lion() : base("Lion") { }

    public override void Eat(Herbivore herbivore)
    {
        Console.WriteLine($"Lion attacks and eats {herbivore.Name}!");
    }
}
