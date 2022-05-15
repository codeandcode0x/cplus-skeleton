# include <stdio.h>
class Trace {
  public:
    void print(const char *s) { printf("%s", s); }  
};

int main()
{
    const char *str = "begin .... end ...11";
    Trace t ;
    t.print(str);
}