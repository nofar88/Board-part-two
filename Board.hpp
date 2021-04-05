#include <string>
#include <iostream>
#include <map>
#include <limits>
#include "Direction.hpp"


using namespace std;
namespace ariel {

	class Board{
	private:
		map<unsigned int, map<unsigned int, char>> matrix;
		unsigned int lenr=10;
		unsigned int lenc=10;
		unsigned int minr=numeric_limits<int>::max();;
		unsigned int minc=numeric_limits<int>::max();;

		

	public:

	
		


		void post(unsigned int row ,unsigned int column, Direction way ,string s);
	    string read(unsigned int row ,unsigned int column , Direction way , unsigned int len);
	    void show();


	};
	
}