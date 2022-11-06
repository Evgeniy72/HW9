#include <iostream>

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
	Fraction operator+(Fraction other) { (numerator_ = numerator_ * (other.denominator_) + other.numerator_ * (numerator_)); denominator_ = denominator_ * other.denominator_; return *this; }
	Fraction operator-(Fraction other) { (numerator_ = numerator_ * (other.denominator_) - other.numerator_ * (numerator_)); denominator_ = denominator_ * other.denominator_; return *this;; }
	Fraction operator*(Fraction other) { (numerator_ = numerator_ * (other.numerator_)); denominator_ = denominator_ * other.denominator_; return *this; }
	Fraction operator/(Fraction other) { (numerator_ = numerator_ * (other.denominator_)); denominator_ = denominator_ * other.numerator_; return *this; }
	Fraction operator-() { numerator_ = -numerator_; return *this; }
	Fraction& operator++() { numerator_++; return *this; }
	Fraction& operator++(int) { ++numerator_; return *this; }
	Fraction& operator--() { numerator_--; return *this; }
	Fraction& operator--(int) { --numerator_; return *this; }
	std::string Print(Fraction other) { return  other.numerator_ + " / " + other.denominator_; }
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
	std::cout << "f1 + f2 = " << f1.Print(f1 + f2) << '\n';
	std::cout << "f1 - f2 = " << f1.Print(f1 - f2) << '\n';
	std::cout << "f1 * f2 = " << f1.Print(f1 * f2) << '\n';
	std::cout << "f1 / f2 = " << f1.Print(f1 / f2) << '\n';
	std::cout << "- f1 = " << f1.Print(-f1) << '\n';
	std::cout << "++f1 = " << f1.Print(++f1) << '\n';
	std::cout << "f2++ = " << f1.Print(f2++) << '\n';
	std::cout << "--f1 = " << f1.Print(--f1)<< '\n';
	std::cout << "f2-- = " << f1.Print(f2--) << '\n';
}