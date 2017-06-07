#include "stdafx.h"
#include "PhBookEntry.h"


CPhBookEntry::CPhBookEntry()
{
}


CPhBookEntry::~CPhBookEntry()
{
}


CPhBookEntry::CPhBookEntry(string aName, string aSurname, string aPhoneNo)
{
	firstName = aName;
	lastName = aSurname;
	phoneNo = aPhoneNo;
}
bool CPhBookEntry::operator>(CPhBookEntry entry)
{
	if (lastName.compare(entry.lastName) == 0)
		if (firstName.compare(entry.firstName)>0)
			return true;
	if (lastName.compare(entry.lastName) > 0)
		return true;
	return false;
}
bool CPhBookEntry::operator==(string entry)
{
	int length = entry.length();
	string name = lastName;
	transform(name.begin(), name.end(), name.begin(), ::tolower);
	if (name.substr(0, length).compare(entry) == 0)
		return true;
	return false;
}
bool CPhBookEntry::operator==(CPhBookEntry entry)
{
	return (firstName == entry.firstName && lastName == entry.lastName && phoneNo == entry.phoneNo);
}
bool CPhBookEntry::operator<(CPhBookEntry entry)
{
	if (lastName.compare(entry.lastName) == 0)
		if (firstName.compare(entry.firstName)<0)
			return true;
	if (lastName.compare(entry.lastName) < 0)
		return true;
	return false;

}
ostream& operator << (ostream& os, CPhBookEntry& ent)
{

	os << setw(20) << ent.GetLastName() << setw(20) << ent.GetFirstName() << setw(20) << ent.GetPhoneNo() << endl;


	return os;
}
string CPhBookEntry::GetFirstName()
{
	return firstName;
}
string CPhBookEntry::GetLastName()
{
	return lastName;
}
string CPhBookEntry::GetPhoneNo()
{
	return phoneNo;
}