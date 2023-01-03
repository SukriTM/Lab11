#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    int count;
    float sum ;
    string textline;
    ifstream source ;
    source.open ("score.txt");
    while (getline(source,textline))
    { 
        sum += atof(textline.c_str());
        count++;
    }
        cout << "Number of data = " << count << endl;
        cout << setprecision(3);
        cout << "Mean = " << sum/count << endl;
    source.close();
    source.open("score.txt");
    float mean;
    mean = sum /count;
    sum = 0 ;
    count = 0 ;
    while (getline(source,textline))
    {
        sum +=pow((atof(textline.c_str())-mean),2);
        count ++;
    }
    float deviation;
    deviation=sqrt(sum/count);
    cout << "Standard deviation = " << deviation;
    source.close();

return 0;
}
