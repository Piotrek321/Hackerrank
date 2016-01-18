class Person{
public:
   int age ;
   Person(int initial_Age);
   void amIOld();
   void yearPasses();
};
Person::Person(int initial_Age){
    if (initial_Age >0) 
        {
            age=initial_Age;
    }else
        {
                age = 0;
  
    }

}
void Person::amIOld(){
    if(age <=0)       cout << "This person is not valid, setting age to 0." << endl;
    if(age <13)
        {
       cout << "You are young." <<endl;
    }else if(age >=18)
        {
       cout <<"You are old." << endl;
    }else cout <<"You are a teenager." << endl;

}
    

void Person::yearPasses(){
    this->age ++;

}
