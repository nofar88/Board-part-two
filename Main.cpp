
#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {

	ariel::Board board;
    

	board.post(100,200,Direction::Horizontal,"nofar");
	cout << board.read(/*row=*/99, /*column=*/201, Direction::Vertical, /*length=*/3) << endl; 
	// prints "_o_" 
    board.post(100,200,Direction::Horizontal,"abc");
    board.post(100,202,Direction::Vertical,"xyz");
    board.post(100,202,Direction::Vertical,"abcd");  
    board.post(103,204,Direction::Vertical,"p");
    cout << board.read(/*row=*/100, /*column=*/201, Direction::Vertical, /*length=*/3) << endl; 
    // prints "b__"
    board.post(103,202,Direction::Horizontal,"good");  
    board.post(103,206,Direction::Horizontal,"!");
    cout << board.read(/*row=*/103, /*column=*/202, Direction::Horizontal, /*length=*/6) << endl;
    // prints "good!_" 
    cout << board.read(/*row=*/99, /*column=*/202, Direction::Vertical, /*length=*/7) << endl;
    // prints "_abcg__"  
    cout << board.read(/*row=*/100, /*column=*/204, Direction::Vertical, /*length=*/4) << endl; 
    // prints "r__o" 
    cout << endl << " the full board is:" << endl;
    board.show(); // shows the board in a reasonable way. For example:
	 cout << endl << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;   

		//    99:  _________
		//    100: abaar____
		//    101: __b______
		//    102: __c______
        //    103: __good!__

    ariel::Board board2;

    board2.post(200,100,Direction::Vertical,"my name is");
   
     cout << board2.read(200,100,Direction::Vertical,1) << endl;
     // prints "m"
     cout << board2.read(200,100,Direction::Vertical,2) << endl;
     // prints "my"
     cout << board2.read(200,100,Direction::Vertical,3) << endl;
     // prints "my "
     cout << board2.read(200,100,Direction::Vertical,4) << endl;
     // prints "my n"
     cout << board2.read(200,100,Direction::Vertical,5) << endl;
     // prints "my na"
     cout << board2.read(200,100,Direction::Vertical,6) << endl;
     // prints "my nam"
     cout << board2.read(200,100,Direction::Vertical,7) << endl;
     // prints "my name"
     cout << board2.read(200,100,Direction::Vertical,8) << endl;
     // prints "my name "
     cout << board2.read(200,100,Direction::Vertical,10) << endl;
     // prints "my name is"
     cout << endl << " the full board is:" << endl;
     board2.show(); // shows the board in a reasonable way. For example:
	 cout << endl << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;	
	//    200: m________
	//    201: y________
	//    202:  ________
    //    203: n________
    //    204: a________
    //    205: m________
    //    206: e________
    //    207:  ________
    //    208: i________
    //    209: s________
    //    210: _________

       


ariel::Board board3;
    board3.post(10,10,Direction::Horizontal,"a");
     board3.post(11,11,Direction::Horizontal,"b");
      board3.post(12,12,Direction::Horizontal,"c");
       board3.post(13,13,Direction::Horizontal,"d");
   
     cout << board3.read(10,11,Direction::Horizontal,1) << endl;
     // prints "_"
     cout << board3.read(11,10,Direction::Horizontal,2) << endl;
     // prints "_b"
     cout << board3.read(13,11,Direction::Horizontal,3) << endl;
     // prints "__d"
     cout << board3.read(12,10,Direction::Horizontal,4) << endl;
     // prints "__c_"
   
    
     cout << endl << " the full board is:" << endl;
     board3.show(); // shows the board in a reasonable way. For example:
         cout << endl << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;   

		//
		//    10: a________
		//    11: _b_______
		//    12: __c______
		//    13: ___d_____
       

    

}

