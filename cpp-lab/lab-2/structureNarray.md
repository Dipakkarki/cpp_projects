# Array of Structure
Structure is collection of different data type. An object of structure represents a single record in memory, if we want more than one record of structure type, we have to create an array of structure or object. As we know, an array is a collection of similar type, therefore an array can be of structure type.

* Syntax for declaring structure array

              struct struct-name
              {
                     datatype var1;
                     datatype var2;
                     - - - - - - - - - -
                     - - - - - - - - - -
                     datatype varN;
              };

              struct-name obj [ size ];


# Array within Structure
As we know, structure is collection of different data type. Like normal data type, It can also store an array as well. 

* Syntax for array within structure

              struct struct-name
              {
                     datatype var1;                    // normal variable
                     datatype array [size];          // array variable
                     - - - - - - - - - -
                     - - - - - - - - - -
                     datatype varN;
              };

              struct-name obj;
