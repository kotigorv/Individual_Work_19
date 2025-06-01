#include "Individual_Work_19.h"

class Car {
public:
    std::string brand;
    int year;

    Car(std::string b, int y) : brand(b), year(y) {}

    void display() const {
        std::cout << brand << " (" << year << ")" << std::endl;
    }
};

class CarList {
private:
    std::vector<std::shared_ptr<Car>> cars;

public:
    void addCar(const std::string& brand, int year) {
        cars.push_back(std::make_shared<Car>(brand, year));
    }

    void removeCarByBrand(const std::string& brand) {
        cars.erase(std::remove_if(cars.begin(), cars.end(),
            [&](const std::shared_ptr<Car>& car) { return car->brand == brand; }),
            cars.end());
    }

    void displayCars() const {
        std::cout << "Car list:\n";
        for (const auto& car : cars) {
            car->display();
        }
    }
};

int main() {
    CarList carList;

    carList.addCar("Toyota", 2020);
    carList.addCar("BMW", 2018);
    carList.addCar("Honda", 2022);

    carList.displayCars();
    carList.removeCarByBrand("BMW");
    carList.displayCars();

    return 0;
}
