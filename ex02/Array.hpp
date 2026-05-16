#pragma once

#include <cstddef>
#include <iostream>
#include <string>


template <typename T>
class	Array
{
	private:
		unsigned int	_size;
		T				*data;

	public:
		Array() : _size(0)
		{
			data = NULL;
		}

		Array( unsigned int n ): _size(n)
		{
			if (n > 0)
				data = new T[n]();
			else
				data = NULL;
		}

		Array( const Array &old ) : _size(old._size)
		{
			if (_size > 0) {
				data = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					data[i] = old.data[i];
			}
			else
				data = NULL;
		}

		Array	&operator=( const Array &old )
		{
			if (this == &old) {
        		return *this;
    		}
			
			_size = old._size;
			delete []data;
			if (_size > 0) {
				data = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					data[i] = old.data[i];
			}
			else {
				data = NULL;
			}

			return (*this);
		}

		unsigned int	size( void ) const
		{
			return (_size);
		}

		class	myExcpt : public std::exception
		{
			const char	*what() const throw()
			{
				return "Invalide size :/";
			}
		};

		T	&operator[]( unsigned int i )
		{
			if (i >= _size)
			{
				throw myExcpt();
			}
			else
			{
				return data[i];
			}
		}

		~Array()
		{
			delete []data;
		}
};