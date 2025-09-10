#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:
    Stove(int temperature){
        setTemperature(temperature);
    }

    // Getter makes private attribute readable
    int getTemperature(){
        return temperature;
    }
    // Setter makes private attribute writable
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
};

int main() {

    //Stove stove;
    //Stove stove(0);

    //stove.temperature = 100
    //stove.setTemperature(5)
    stove.setTemperature(150) // User can change temperature here

    std::cout << "The temperature is: " << stove.getTemperature

    return 0;
}