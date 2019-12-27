#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
 
void All_buses(const map<string, vector<string>>& f) {
    if (f.size() == 0) cout << "No buses" << endl;
    else { 
        for (const auto& i : f) { 
            cout << "Bus " << i.first << ":"; 
            for (const auto& d : i.second) { 
                cout << " " << d; 
            }
            cout << endl;
        }
    }
}

void BusforStop(const string& s, const map<string, vector<string>>& f, const vector<string>& busm) { 
    int k = 0; 
    vector<string> v;
    for (const auto& i : f) { 
        for (const auto& n : i.second) { 
            if (n == s) {
                v.push_back(i.first); 
                k++; 
            }
        }
    }
    if (k > 0) {
        for (const auto& w : busm) { 
            for (auto z : v) {
                if (z == w) {
                    cout << w << " ";
                }
            }
        }
    }
    else if (k == 0) cout << "No stop"; 
    cout << endl;
}

void Stopforbus(const string& s, const map<string, vector<string>>& f, const vector<string>& busm) {
    int l = 0;
    for (auto i : f) {
        if (i.first == s) {
            for (auto m : i.second) {
                cout << "Stop " << m << ":"; 
                int l2 = 0; 
                vector<string> v;
                for (auto r : f) { 
                    for (auto n : r.second) { 
                        if (n == m && r.first != s) {
                            v.push_back(r.first);
                            l2++;
                        }
                    }
                }
                if (l2 == 0) cout << " no interchange";
                else if (l2 > 0) {
                    for (const auto& w : busm) { 
                        for (auto z : v) { 
                            if (z == w) { 
                                cout << " "  << w; 
                            }
                        }
                    }
                }
                cout << endl; 
            }
            l++; 
        }
    }
    if (l == 0) cout << "No bus" << endl; 
}

int main(){
    int Q;
    cin >> Q;
    map<string, vector<string>> bsmap; 
    vector<string> busm;
    for (Q; Q > 0; Q--) {
        string comand, bus, stop;
        cin >> comand;
        if (comand == "NEW_BUS") { 
            int stops_number; 
            cin >> bus >> stops_number; 
            busm.push_back(bus);
            for (stops_number; stops_number > 0; stops_number--) { 
                cin >> stop;
                bsmap[bus].push_back(stop); 
            }
        }
        else if (comand == "BUSES_FOR_STOP") {
            cin >> stop;
            BusforStop(stop, bsmap, busm); 
        }
        else if (comand == "STOPS_FOR_BUS") {
            cin >> bus;
            Stopforbus(bus, bsmap, busm);
        }
        else if (comand == "ALL_BUSES") {
            All_buses(bsmap);
        }
    }
    return 0;
}