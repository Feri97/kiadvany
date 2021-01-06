class Base
{
 public:
  Base(){ };
  void f(){ };
};

class Derived : public Base
{
 public:
  Derived(){ };
};

Derived* der = new Derived();
der->f(); //A Derived osztály örökölte az f függvényt
