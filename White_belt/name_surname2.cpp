#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<string> FormNamesHistory(int year, map<int, string>& data){
	vector<string> result;
	int limit = data.begin() -> first;
	for(int i = year; i >= limit; --i){
  		if(data.count(i))
 			result.push_back(data[i]);
  	}
  	return result;
}

string FindName(const int year, const map<int, string>& data){
  	string name;
  	for (const auto& item : data){
	    if (item.first <= year)
	    	name = item.second;
	    else
			break;
	}
	return name;
}

string GetHistoryNames(const vector<string>& data){
	string result;// = " (";
	string check = data[0];
	unsigned int limit = data.size()-1;
	for(unsigned int i = 1; i < limit; ++i){
		if(check != data[i]){
			result += data[i] + ", ";
			check = data[i];
		}
	}
	if(data[limit] != check)
		result += data[limit];
	if(!result.empty()){
		return " (" + result + ")";
	}
	//result += ")";
	return result;
}

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
    // добавить факт изменения имени на first_name в год year
    firstName[year] = first_name;
}

  void ChangeLastName(int year, const string& last_name) {
    // добавить факт изменения фамилии на last_name в год year
	lastName[year] = last_name;
}

  string GetFullName(int year) {
	string name = FindName(year, firstName);
	string surname = FindName(year, lastName);

  	if(!name.empty() && !surname.empty())
  		return name + " " + surname;
  	else if(!name.empty())
  		return name + " with unknown last name";
  	else if(!surname.empty())
  		return surname + " with unknown first name";
  	else return "Incognito";
    // получить имя и фамилию по состоянию на конец года year
  }

  string GetFullNameWithHistory(int year) {
  	vector<string> names = FormNamesHistory(year, firstName);
  	vector<string> surnames = FormNamesHistory(year, lastName);

  	string result;
  	if(!names.empty() && !surnames.empty())
  	{
  		result = names[0];
  		if(names.size() > 1)
  		{
  			result += GetHistoryNames(names);
  		}
  		result += (" " + surnames[0]);
  		if(surnames.size() > 1)
  		{
  			result += GetHistoryNames(surnames);
  		}
  		return result;
  	}
  	else if(!names.empty())
  	{
  		result = names[0];
  		if(names.size() > 1)
  		{
  			result += GetHistoryNames(names);
  		}
  		result += " with unknown last name";
  	}
  	else if(!surnames.empty())
  	{
  		result = surnames[0];
  		if(surnames.size() > 1)
  		{
  			result += GetHistoryNames(surnames);
  		}
  		result += " with unknown first name";
  	}
  	else result = "Incognito";
  	return result;
  }

private:
	map<int, string> firstName;
	map<int, string> lastName;
  // приватные поля
};

int main()
{
	/*вставить код из примера в условии задачи и проверить*/
	getchar();
	return 0;
}