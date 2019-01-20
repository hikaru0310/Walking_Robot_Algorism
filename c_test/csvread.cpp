#include<iostream>
#include<fstream>
#include<string>
#include <sstream>
#include <vector>
#include<stdio.h>

using namespace std;

vector<string> split(string& input, char delimiter)
{
    istringstream stream(input);
    string field;
    vector<string> result;
    while (getline(stream, field, delimiter)) {
        result.push_back(field);
    }
    return result;
}

int main()
{
    ifstream ifs("leg_trj.csv");

    string line;
    int i=0;
    float leg_r[2700];
    float leg_c[2700];
    float leg_l[2700];
    while (getline(ifs, line)) {
        
        vector<string> strvec = split(line, ',');
        
            leg_r[i]=stof(strvec.at(0));
            leg_c[i]=stof(strvec.at(1));
            leg_l[i]=stof(strvec.at(2));

       i++; 
    }
    for(int k=0;k<3;k++){
    	printf("r=%f\n",leg_r[k]);
	
    	printf("c=%f\n",leg_c[k]);
    	printf("l=%f\n",leg_l[k]);
    }
} 

