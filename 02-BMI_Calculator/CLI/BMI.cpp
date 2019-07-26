#include <iostream>
#include <string>
#include <algorithm>

enum Units { Metric, Imperial};

void bmiCompare(float bmi_input);
float calculateBMI(float weight, float height, Units unit_type);
Units unitCheck(std::string input);

int main()
{
    std::cout << "Welcome to the BMI calculator" << std::endl;
    std::cout << "Please choose your unit system (metric/imperial)" << std::endl;

    std::string s_input;

    std::cin >> s_input;
    Units Units_input = unitCheck(s_input);

    float f_weight;
    float f_height;
    std::cout << "Your Weight(kg/lb): ";
    std::cin >> f_weight;
    std::cout << "Your Height(m/in): ";
    std::cin >> f_height;

    float f_result = calculateBMI(f_weight, f_height, Units_input);

    std::cout << "Your BMI is " << f_result << std::endl;

    bmiCompare(f_result);

    return 0;
}

void bmiCompare(float bmi_input) {

}

float calculateBMI(float weight, float height, Units unit_type) {
    switch (unit_type)
    {
    case Metric:
        return (weight / (height * height));
    case Imperial:
        return (703 * weight / (height * height));
    default:
        return 0;
    }
}

Units unitCheck(std::string input) {
    std::string data = input;
    std::transform(data.begin(), data.end(), data.begin(), ::tolower);

    if (data=="metric") return Metric;
    else if (data=="imperial") return Imperial;
    else return Metric;
    
}