#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int q, day_i, month = 0;
	string operation, curr_task;


	cin >> q;

	vector<int> days_num = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<vector<string>> months(31, vector<string>());

	for (int i=0; i<q; i++){
		cin >> operation;

		if (operation == "ADD") {
			cin >> day_i;
			cin >> curr_task;
			months[day_i - 1].push_back(curr_task);

		} else if (operation == "DUMP"){
			cin >> day_i;
			cout << months[day_i - 1].size();

			for(string s: v[day_i - 1]){
				cout << " " << s;
			}
			cout << endl;

		} else if (operation == "NEXT"){
			month += 1;
			if (month == 12){
				month = 0;
			}
			if (month != 0){
				if (days_num[month] == 28) {
                    months[27].insert(end(months[27]), begin(months[28]), end(months[28]));
                    months[28].clear();
                    months[27].insert(end(months[27]), begin(months[29]), end(months[29]));
                    months[29].clear();
                    months[27].insert(end(months[27]), begin(months[30]), end(months[30]));
                    months[30].clear();
                } else if (days_num[month] == 30) {
                    months[29].insert(end(months[29]), begin(months[30]), end(months[30]));
                    months[30].clear();
                }
			}
		}
	}
	return 0;
}