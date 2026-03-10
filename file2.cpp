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
        return "Lolos";
        else if (r>= 50)
            return "lolos pertimbangan";
        else if (r<= 40)
        return "lu lus tetapi metrikulasi 1 tahun";    
    else
        return "gagal";
}

int main(){
    float nilBI, nilMTK, rerata;

    string status;

    cout << "masukkan nilai bahasa inggris =";
    cin >> nilBI;
    cout << "masukkan nilai matematika =";
    cin >> nilMTK;

    //rerata = Rata_rata(nilBI, nilMTK);
    //if (rerata >= 60)
    //    status = "Lolos";
    //else
    //    status = "Gagal";
    rerata = Rata_rata(nilBI, nilMTK);