#include<iostream>


class Date
{
	int day;
	int month;
	int Year;
public:
	Date()
	{
		day = 0;
		month = 0;
		Year = 0;
	}


	Date(int d, int m, int y)
	{
		day = d;
		month = m;
		Year = y;
	}


	void SetDay(int d)
	{
		day = d;
	}


	void SetMonth(int m)
	{
		month = m;
	}


	void SetYear(int y)
	{
		Year = y;
	}


	int GetDay()
	{
		return day;
	}


	int GetMonth()
	{
		return month;
	}


	int GetYear()
	{
		return Year;
	}


	void Print()
	{
		std::cout << day << "." << month << "." << Year << std::endl;
	}


	Date operator++(int)
	{
		this->day+=1;
		return *this;
	}


	Date operator--(int)
	{
		this->day -= 1;
		return *this;
	}


	Date operator+(int b)
	{
		this->day + b;
		return *this;
	}


	Date operator-(int b)
	{
		this->day + b;
		return *this;
	}


	Date operator+=(int b)
	{
		this->day += b;
		return *this;
	}


	Date operator-=(int b)
	{
		this->day -= b;
		return *this;
	}


	bool operator<(Date data)
	{
		if (Year < data.GetYear())
			return true;
		else if (Year == data.GetYear())
			if (month < data.GetMonth())
				return true;
			else if (month == data.GetMonth())
				if (day < data.GetDay())
					return true;
		return false;
	}


	bool operator>(Date data)
	{
		if (Year > data.GetYear())
			return true;
		else if (Year == data.GetYear())
			if (month > data.GetMonth())
				return true;
			else if (month == data.GetMonth())
				if (day > data.GetDay())
					return true;
		return false;
	}


	bool operator<=(Date data)
	{
		if (Year <= data.GetYear())
			return true;
		else if (Year == data.GetYear())
			if (month <= data.GetMonth())
				return true;
			else if (month == data.GetMonth())
				if (day <= data.GetDay())
					return true;
		return false;
	}


	bool operator>=(Date data)
	{
		if (Year >= data.GetYear())
			return true;
		else if (Year == data.GetYear())
			if (month >= data.GetMonth())
				return true;
			else if (month == data.GetMonth())
				if (day >= data.GetDay())
					return true;
		return false;
	}


	bool operator==(Date data)
	{
		if (Year == data.GetYear())
			if (month == data.GetMonth())
				if (day == data.GetDay())
					return true;
		return false;
	}


	bool operator!=(Date data)
	{
		if (Year != data.GetYear())
			if (month != data.GetMonth())
				if (day != data.GetDay())
					return true;
		return false;
	}
	
	
	int operator[](unsigned int index)
	{
		if(index == 0) return day;
		else if (index == 1) return month;
		else if (index == 2) return Year;
		else throw "Incorrect index!";
	}
};


int main()
{
	Date a(19, 11, 1972);
	Date b(20, 11, 1972);
	bool c = a < b;
	std::cout << c;
}
