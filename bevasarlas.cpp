#include <string>

using namespace std;

bool vasarlas(string termekek[], int darab, int max_korlat){
    int ossz = 0;
    for(int i = 0; i < darab; i++){
       ossz += stoi(termekek[i]);
    }
    return ossz <= max_korlat;
}
/*
 #include <string>

using namespace std;

bool vasarlas(string termekek[], int darab, int max_korlat) {
    int termek_mennyiseg = 0;
    for (int i = 0; i < darab; i++) {
        termek_mennyiseg += stoi(termekek[i]);
    }

    return termek_mennyiseg <= max_korlat;
}
 */
