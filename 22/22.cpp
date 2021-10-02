class member {
    string s;

public:
    member(string s) {
        this-> s = s;
    }

    ~member() {
        cout << "~member " << s << endl;
    }
};

class base {
    member m;
public:
    base() : m("base"){
    }

    ~base() {
        cout << "~base" << endl;
    }
};

class derived : base{
     member m2;
public:

    derived() :m2("derived") {    }

    ~derived() {
        cout << "~derived" << endl;
    }
};

int main(int argc, const char * argv[]) {
    derived s;

    return 0;
}
