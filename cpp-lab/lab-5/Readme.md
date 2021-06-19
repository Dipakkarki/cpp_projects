# Constructor
Constructor is a special member function of class and it is used to initialize the objects of its class. It is treated as a special member function because its name is the same as the class name.
These constructors get invoked whenever an object of its associated class is created. It is named as "constructor" because it constructs the value of data member of a class. Initial values can be passed as arguments to the constructor function when the object is declared.

# Types of constructor
* Default Constructor
* Parameterized Constructor
* Copy Constructor

# Constructor Overloading
The constructor overloading can be defined as the concept of having more than one constructor with different parameters so that every constructor can perform a different task.

Here, we created a class named Room.

class Room
And under the class Room, we defined constructor as the same name as of class with different numbers of parameters as follow :-

# Constructor with no parameter
Room()     
     {
        length = 5.2;
        breadth = 4.8;
        height = 4.9;
     }
Here we don't have any parameter so, the compiler will act as default.

# Constructor with single parameter
Room(double l)
            {
                length = l;
                breadth = 6.2;
                height = 5.4; 
            }
Here, we have single parameter so, we are allowed to take single input and other's value are assigned.

# Constructor with double parameter
Room(double l , double b)      
            {
                length = l;
                breadth = b;
                height = 10.1;
            }
Here we have double parameter so, we are allowed to take two input and other's value are assigned.

# Constructor with triple parameter
Room(double l , double b , double h)
            {
                length = l;
                breadth = b;
                height = h;
            }
Here we have triple parameter so, we are allowed to take three input.

# The main function is called as :-

int main()
{
    Room room1, room2(8.2), room3(6.3,4.5), room4(8.0, 6.1 , 5.8);

    
    cout<<"\n\tVolume of the room 1 : "<<room1.calculateVolume()<<endl;       //Constructor is being called with no parameter//
    
    cout<<"\n\tVolume of the room 2 : "<<room2.calculateVolume()<<endl;      //Constructor is being called with single parameter//
    
    cout<<"\n\tVolume of the room 3 : "<<room3.calculateVolume()<<endl;       //Constructor is being called with double parameter//
    
    cout<<"\n\tVolume of the room 4 : "<<room4.calculateVolume()<<endl;       //Constructor is being called with triple parameter//

    return 0;   
}


# The outputs are given as :-

        Volume of the room 1 : 122.304

        Volume of the room 2 : 274.536

        Volume of the room 3 : 286.335

        Volume of the room 4 : 283.04

# Example:
       class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
} 

# Output:
BMW X5 1999
Ford Mustang 1969