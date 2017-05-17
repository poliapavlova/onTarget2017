/*
 * Address.h
 *
 *  Created on: May 17, 2017
 *      Author: polia
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include<string>
using namespace std;
class Address
{
public:
	Address();
	Address(string city, string street, int number);
	virtual ~Address();
	void print() const;
	const string& getCity() const;
	void setCity(const string& city);
	int getNumber() const;
	void setNumber(int number);
	const string& getStreet() const;
	void setStreet(const string& street);

private:
	string city;
	string street;
	int number;

};

#endif /* ADDRESS_H_ */
