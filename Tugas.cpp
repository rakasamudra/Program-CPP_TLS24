#include <iostream>
#include <string>

using namespace std;

int main() {
    // BB = Tinggi badan BB = Berat badan
    double tb, bb, imt;
    
    cout << "Masukkan Tinggi Badan M: ";
    cin >> tb;
    cout << "Masukkan Berat Badan dalam Kg: ";
    cin >> bb;
    
    imt = bb/(tb*tb);
    
    cout << "Indeks massa tubuh mu adalah " << imt << endl;
    
    if (imt < 17) {
        cout << "kamu kurus sekali" << endl;
    } else if (imt > 17 && imt < 18.5 ){
        cout << "kamu kurus" << endl;
    } else if (imt > 18.5 && imt < 25 ){
        cout << "kamu normal" << endl;
    } else if (imt > 25 && imt <27){
        cout << "kamu gemuk" << endl;
    } else if (imt > 27){
        cout << "kamu obesitas" << endl;
    }

    return 0;
}