#include <string>
#include <iostream>

using namespace std;

class Weapon {
private:
    float damage;
    float weight;
    string name;

public:
    Weapon() : Weapon("hand", 0, 0) {}
    Weapon(string name, float damage, float weight) : name(name), damage(damage), weight(weight) {}

    ~Weapon() {
        cout << *this << " уничтожается" << endl;
    }

    friend ostream& operator<<(ostream& out, Weapon& weapon) {
        out << "Оружие \"" << weapon.name << "\": урон = " << weapon.damage << ", вес = " << weapon.weight << " кг";

        return out;
    }

    bool canTake(float maxWeight) {
        return maxWeight >= this->weight;
    }

    float getSum(float loadWeight) {
        return this->weight + loadWeight;
    }

    float getSum(Weapon& weapon) {
        return getSum(weapon.weight);
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Weapon gun("gun", 10, 0.7);
    cout << gun << endl;

    Weapon* knife = new Weapon("knife", 5, 0.5);
    cout << *knife << endl;

    cout << "Могули я взять пистолет?" << (gun.canTake(2) ? " Да" : " Нет") << endl;
    cout << "Вес пистолета и доп.нагрузки: " << gun.getSum(7) << endl;
    cout << "Вес пистолета и ножа: " << gun.getSum(*knife) << endl;
    delete knife;
}