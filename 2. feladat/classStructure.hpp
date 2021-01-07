class A
{
 public:
  A() { this->msg = "Helló, világ!";} //konstruktor
 private:
  std::string msg;
};

A* obj = new A(); //példányosítás