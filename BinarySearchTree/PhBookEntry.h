#pragma once
#pragma once
using namespace std;

class CPhBookEntry
{
public:
	CPhBookEntry();
	~CPhBookEntry();
private:
	string firstName;
	string lastName;
	string phoneNo;
public:
	CPhBookEntry(string aName, string aSurname, string aPhoneNo);
	bool operator>(CPhBookEntry entry);
	bool operator==(string entry);
	bool operator==(CPhBookEntry entry);
	bool operator<(CPhBookEntry entry);
	friend ostream& operator<<(ostream& os, CPhBookEntry&);
	string GetFirstName();
	string GetLastName();
	string GetPhoneNo();
};