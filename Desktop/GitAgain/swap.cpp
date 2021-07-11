template <class T>
T sswap(T& a, T& b)
{
	T tmp(std::move(a));
	a = std::move(b);
	b = std::move(tmp);
	//std::cout << "a -> " << a << "\nb->" << b << std::endl;
	return tmp;
}