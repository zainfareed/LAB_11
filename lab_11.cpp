

#include <iostream>
using namespace std;


class convert_base {

protected:  		// data members for the base class
   double initial_value;
   double converted_value;

public:			// functions for the base class

   convert_base(double passed_value) {  // constructor
       initial_value = passed_value;
       }

   double get_initial() {
       return initial_value;
       }

   double get_converted() {
       return converted_value;
       }

   virtual void convert_it() = 0;

};  // end of class convert_base



class kilos_miles : public convert_base {

public:
   kilos_miles(double passed_value) : convert_base(passed_value) { }



   void convert_it() {
       converted_value = initial_value * 0.6;
       }

};

class miles_kilos : public convert_base {

public:
   miles_kilos(double passed_value) : convert_base(passed_value) { }

	    void convert_it() {
        converted_value = initial_value/0.6;
      }

};  // end of class miles_kilos





class meters_yards : public convert_base {

public:
   meters_yards(double passed_value) : convert_base(passed_value) { }

   void convert_it() {
     converted_value = initial_value*(39.0/36.0);
}
};



class yards_meters : public convert_base {

public:
   yards_meters(double passed_value) : convert_base(passed_value) { }

   void convert_it() {
     converted_value = initial_value*(36.0/39.0);
}
};
/*****************  Main Function Starts Here ***********/
int main() {


kilos_miles kilos1(100.0);  // create a kilos_to_miles object
kilos1.convert_it(); // call the virtual function of that class

cout << endl;
cout << endl << "Distance in kilometers is: " << kilos1.get_initial();
cout << endl << "Distance in miles is: " << kilos1.get_converted();
cout << endl;





miles_kilos miles1(60);
miles1.convert_it();

cout << endl;
cout << endl << "Distance in miles is: " << miles1.get_initial();
cout << endl << "Distance in kilometers is: " << miles1.get_converted();
cout << endl;





yards_meters yards1(4);
yards1.convert_it();

cout << endl;
cout << endl << "Distance in yards is: " << yards1.get_initial();
cout << endl << "Distance in meters is: " << yards1.get_converted();
cout << endl;





meters_yards meters1(4);
meters1.convert_it();

cout << endl;
cout << endl << "Distance in meters is: " << meters1.get_initial();
cout << endl << "Distance in yards is: " << meters1.get_converted();
cout << endl;

return 0;
} // end main
