//Problem solving of hierarchical inheritance using to get data of empolyee
#include<iostream>
using namespace std;


class staff
{
    
    protected:
        int code = 0;
        char name[30];


    public:
        
        
        void get_name()
        {

            cout<<"Enter the name."<<endl;
            cin>>this->name;
        }

        void get_code()
        {
            cout<<"Enter the code number."<<endl;
            cin>>this->code;
        }
         
};



class teacher : public staff
{

    protected:
        char subject[35];
        char publication[30];

    
    public:

        void get_sub_and_publication()
        {
            cout<<"Enter the name of the subject"<<endl;
            cin>>this->subject;
           cout<<"Enter the name of the publication of the subject."<<endl;
            cin>>this->publication;
        }

        void display_sub_publication()
        {
            cout<<"Name of the teacher : "<<this->name<<endl;
            cout<<"Code number : "<<this->code<<endl;
            cout<<"Name of the subject : "<<this->subject<<endl;
            cout<<"Name of the publication : "<<this->publication<<endl;
        }

        
};


class officer : public staff
{

    protected:
        char grade[20];

    public:
        void get_grade()
        {
            cout<<"Enter the grade."<<endl;
            cin>>this->grade;
    
        }

        void display_grade()
        {
            cout<<"Name of the officer : "<<this->name<<endl;
            cout<<"Code number : "<<this->code<<endl;
            cout<<"Grade of the officer : "<<this->grade<<endl;

        }
};

class  typist : public staff
{
    protected:
         int speed = 0;

    public:
        void get_speed()
        {
            cout<<"Enter the speed in WPS."<<endl;
            cin>>this->speed;
        }

        void display_speed()
        {
             cout<<"The speed of the typist is : "<<this->speed<< " WPS."<<endl;
        }
};   

class casual : public typist
{
    protected:
        double wages2 = 0;

    public:
        void get_wages2()
        {
            cout<<"Enter the daily wages provided to casual typist."<<endl;
            cin>>this->wages2;
        }

        void display_wages()
        {
            cout<<"Name of the typist : "<<this->name<<endl;
            cout<<"Code number : "<<this->code<<endl;
            cout<<"The speed of the typist is : "<<this->speed<< " WPS."<<endl;
            cout<<"The wage of the typist is Rs "<<this->wages2<<" ."<<endl;
        }
};

class regular : public typist
{ 
    protected:
        double wages1 = 0;
    
    public:
        void get_wages1()
        {
            cout<<"Enter the daily wages provided to regular typist."<<endl;
            cin>>this->wages1;
        }

        void display_wages()
        {
            cout<<"Name of the typist : "<<this->name<<endl;
            cout<<"Code number : "<<this->code<<endl;
            cout<<"The speed of the typist is : "<<this->speed<< " WPS."<<endl;
            cout<<"The wage of the typist is Rs "<<this->wages1<<" ."<<endl;
        }
         
};

int main()
{   
    int choose;
    char option;
    staff s;
    teacher t;
    officer o;
    typist typ;
    casual c;
    regular r;
    
   
    

    do
    {
    
            cout<<"\t=> Press 1 for registration of teacher."<<endl;
            cout<<"\t=> Press 2 for registration of officer."<<endl;
            cout<<"\t=> Press 3 for registration of typist."<<endl;
           
            cin>>choose;    
         
         
         switch (choose)
         {

            case 1:
                {
                    t.get_name();
                    t.get_code();
                    t.get_sub_and_publication();        
                }
                break;

            case 2:
                {
                    o.get_name();
                    o.get_code();
                    o.get_grade();
                }
                break;

            case 3:
                {
                    typ.get_name();
                    typ.get_code();
                    typ.get_speed();
                }
            break;
         
            default:
                    cout<<"Invalid input";
            break;
         }
 
 
         cout<<"Do you want to register more data y/n ?"<<endl;
         cin>>option;
    }
    
    
    while ( option=='y'||option=='Y');
        {
 
 
            cout<<"Do you want to display the data y/n ?";
            cin>>option;

            if(option=='y'||option=='Y')
                
                {
                 
                    cout<<"Press 1 to Display data of Teacher "<<endl;
                    cout<<"Press 2 to Display data of Officer "<<endl;
                    cout<<"Press 3 to Display data of Typist "<<endl;
        

                    cin>>choose;
                switch (choose)
                {
                    case 1:
                        t. display_sub_publication();
                    break;

                    case 2:
                        o.display_grade();
                    break;

                    case 3:
                        typ.display_speed();
                    break;
                
                    default:
                        cout<<"Invalid input";
                    break;
                }
        
        
        }


    }
    
           

    
}