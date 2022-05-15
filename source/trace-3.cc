# include <stdio.h>
class Trace {
    public:
        Trace() {
            noisy = 0 ;
        }
        void print( const char *s) { 
            if(noisy) printf("%s", s);
        }
        void on() {
            noisy = 1; 
        }
        void off() { 
            noisy = 0; 
        }
    
    private:
        int noisy ;
};

int main() {
    const char *str = "haody c plus";
    Trace t;
    t.on();
    t.print(str);
}