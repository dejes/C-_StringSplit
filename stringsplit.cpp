#include<iostream>
#include<string>
#include<cstring>
#include<vector>

using namespace std;
vector<string> StrSplit(string a, char q) {
	vector<string> splited;
	while (true) {
		int sp=a.find(q);
		string temp;
		if (sp > 0) {
			temp.append(a, 0, sp);
			splited.push_back(temp);
			a.erase(0, sp + 1);
		}
		else if (sp < 0) {
			splited.push_back(a);
			break;
		}
	}
	return splited;
}
int main() {
	vector<string> o;
	string a = "jgi|Basme2finSC|404061|estExt_Genemark1.C_170041";
	cout << a.find("|");
	o = StrSplit(a, '|');
	for(int r=0;r<o.size();r++)
		cout << o[r] << "\t" ;
	cout << endl;
	return 0;
}