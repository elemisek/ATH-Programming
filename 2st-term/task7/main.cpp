#include <iostream>

class TWektor {

private:
	float * pArray;
	int size;
public:
	TWektor() {
		size = 3;
		pArray = new float[size];

		for (size_t i = 0; i < size; i++)
		{
			pArray[i] = 0;
		}
	}

	TWektor(const TWektor & other) {
		size = other.size;

		pArray = new float[size];

		for (size_t i = 0; i < size; i++)
		{
			pArray[i] = other.pArray[i];
		}
	}

	~TWektor() {
		delete[] pArray;
	}

	TWektor & operator = (const TWektor & obj) {

		this->size = obj.size;

		this->~TWektor();

		pArray = new float[size];

		for (size_t i = 0; i < size; i++)
		{
			pArray[i] = obj.pArray[i];
		}
		return *this;
	}

	void operator-=(double value) {
		for (size_t i = 0; i < size; i++)
		{
			pArray[i] -= value;
		}
	}

	TWektor  operator-(const TWektor & obj) {
		TWektor result;
		for (size_t i = 0; i < size; i++)
		{
			result.pArray[i] = this->pArray[i] - obj.pArray[i];
		}
		return result;
	}

	double operator*(const TWektor & obj) {
		TWektor result = *this;
		double sum = 0;
		for (size_t i = 0; i < size; i++)
		{
			sum += this->pArray[i] * obj.pArray[i];
		}
		return sum;
	}

	bool operator>(const TWektor & obj) {
		double sum1 = 0;
		double sum2 = 0;
		for (size_t i = 0; i < size; i++)
		{
			sum1 += this->pArray[i];
			sum2 += obj.pArray[i];
		}

		if (sum1 > sum2) {
			return true;
		}
		else {
			return false;
		}
	}

	void operator[](int index) {
		std::cin >> pArray[index];
	}

	void display() {
		for (size_t i = 0; i < size; i++)
		{
			std::cout << this->pArray[i] << " ";
		}
	}
};