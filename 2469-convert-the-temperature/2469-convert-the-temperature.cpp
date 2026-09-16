class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> output;
        double kelvin = celsius+273.15;
        output.push_back(kelvin);
        double fahhh =celsius *1.80 +32.00;
        output.push_back(fahhh);
        return output;
        
    }
};