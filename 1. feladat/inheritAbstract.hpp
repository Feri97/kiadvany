class Derived : public AbstractBase
{
 public:
  Derived(){ };
  virtual ~Derived(){ };
  virtual void printMsg() { std::cout << "MSG\n"; }
};