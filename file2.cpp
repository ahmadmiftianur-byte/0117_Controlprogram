#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a+b)/2;
}


    //status = status_lulus(rerata);

    cout << "status kelulusan = " << status_lulus(rerata)<<" ,dengan nilai rerata = " <<rerata<<endl;
}
string status_lulus(float r){
    if (r>= 60)
        