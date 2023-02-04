#include<iostream>
#include<string>
using namespace std;
bool isNum(string s){
        for(int i=0;i<s.size();i++){
            if(!isdigit(s[i])){
                return false;
            }else return true;
        }

    }
int main(int argc, char *argv[]){
    string name = argv[1];
    string age = argv[2];
    

    if(argc < 3){
        cout << "Thieu du lieu" << endl;
        exit(0);
    } else if(argc >3){
        cout << "Thua du lieu" << endl;
        exit(0);
    }
    if(!isNum(argv[2])){
        cout<< "Age invalid \n";
        exit(0);
    }

    cout << name << endl;
    cout << age << endl;
    return 0;
}
