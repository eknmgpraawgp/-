#include <iostream>
#include <string>
using std::string;

class Weapon
{
public:
    string name;
    float damage;
    float weight;
    Weapon(string n, float d, float w)
    {
        name = n; damage = d; weight = w;
    }
    Weapon()
    {
        name = "hand"; damage = 1;weight = 0;
    }
};

int main()
{
    Weapon weapon = Weapon("gun", 2, 0.6);
    std::cout << weapon.name << " " << weapon.weight << " " << weapon.damage << "\n";
    Weapon W;
    std::cout << W.name << " " << W.weight << " " << W.damage << "\n";

}
