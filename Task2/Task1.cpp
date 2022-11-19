#include <iostream>
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	Fraction operator+(Fraction other) { return Fraction((numerator_ * (other.denominator_) + other.numerator_ * (numerator_)),(denominator_ * other.denominator_)); }
	Fraction operator-(Fraction other) { return Fraction((numerator_ * (other.denominator_) - other.numerator_ * (numerator_)), (denominator_ * other.denominator_)); }
	Fraction operator*(Fraction other) { return Fraction((numerator_ * (other.numerator_)), (denominator_ = denominator_ * other.denominator_));  }
	Fraction operator/(Fraction other) { return Fraction((numerator_ * (other.denominator_)), (denominator_ * other.numerator_));  }
	Fraction operator-() {return Fraction (- numerator_, denominator_); }
	Fraction& operator++() { numerator_ = numerator_ + denominator_; return *this;}
	Fraction& operator++(int) { Fraction time(numerator_, denominator_); numerator_ = numerator_ + denominator_; return time; }
	Fraction& operator--() { numerator_ = numerator_ - denominator_; return *this; }
	Fraction& operator--(int) { Fraction time(numerator_, denominator_); numerator_ = numerator_ - denominator_; return time;
	}
		std::string Print() {
			std::string numeratorSTR = std::to_string(numerator_);
			std::string denominatorSTR = std::to_string(denominator_);
			return  numeratorSTR + " / " + denominatorSTR; }
	};
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	std::cout << "Введите числитель дроби 1" << std::endl;
	std::cin >> a;
	std::cout << "Введите знаменатель дроби 1" << std::endl;
	std::cin >> b;
	Fraction f1(a, b);
	std::cout << "Введите числитель дроби 2" << std::endl;
	std::cin >> a;
	std::cout << "Введите знаменатель дроби 2" << std::endl;
	std::cin >> b;
	Fraction f2(a, b);
	auto fx = f1 + f2;
	std::cout << "f1 + f2 = " << (fx).Print() << '\n';
	fx = f1 - f2;
	std::cout << "f1 - f2 = " << (fx).Print() << '\n';
	fx = f1 * f2;
	std::cout << "f1 * f2 = " << (fx).Print() << '\n';
	fx = f1 / f2;
	std::cout << "f1 / f2 = " << (fx).Print() << '\n';
	fx = -f1;
	std::cout << "- f1 = " << (fx).Print() << '\n';
	fx = ++f1;
	std::cout << "++f1 = " << (fx).Print() << '\n';
	fx = f1++;
	std::cout << "f2++ = " << (fx).Print() << '\n';
	fx = --f1;
	std::cout << "--f1 = " << (fx).Print() << '\n';
	fx = f1--;
	std::cout << "f2-- = " << (fx).Print() << '\n';

}