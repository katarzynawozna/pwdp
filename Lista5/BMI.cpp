#include <iostream>
using namespace std;

float readHeight(){
    float h;
    cout << "Proszę podać wzrost (w metrach): ";
    cin >> h;
    return h;
}

int readMass () {
    int m;
    cout << "Proszę podać swoją wagę (w kg): " ;
    cin >> m;
    return m;
}

float BMI (float h, int m) {
    float BMI = m/(h*h);
    return BMI;
}

void BMIkomunikat ( float BMI ) {
    if ( BMI < 18.49 ) { cout << "Masz niedowagę :(" << endl; }
    if ( BMI > 18.5 && BMI < 24.99 ) { cout << "Masz idealną masę ciała!" << endl; }
    if ( BMI > 24.99 && BMI < 29.99 ) { cout << "Masz nadwagę :(" << endl; }
    if ( BMI > 30.0 ) { cout << "Masz otyłość - skontakuj się ze specjalistą!" << endl; }
}

void BMIprint( float BMI ) {
    cout << "Twoje BMI wynosi: " << BMI << endl;
    BMIkomunikat(BMI);
}

int main() {
    BMIprint( BMI ( readHeight(), readMass() ));   
    return 0;
}