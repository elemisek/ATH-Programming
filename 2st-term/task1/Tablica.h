#pragma once
class Tablica
{
public:
	int w;
	int *T;

	Tablica(int w);
	virtual ~Tablica();
	Tablica(const Tablica & other);
	Tablica & operator=(const Tablica & other);
	Tablica & operator+(const Tablica & other);
	Tablica & operator++(int);
	int & operator[](int);
	operator int();
	bool operator==(const Tablica & other);
	void display() const;

};

