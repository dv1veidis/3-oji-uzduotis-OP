#include "My_lib.h"
#include "Vector.h"

using namespace std;

void vectorTest(){
vector<int> normal;
cout<<"Normal vector results:"<<endl;

normal.assign(3, 10);
cout<<"Normal vector assign ";
for(int i=0; i<normal.size(); i++){
    cout<<normal[i]<<" ";
}
normal.pop_back();
cout<<"\nNormal vector pop_back ";
for(int i=0; i<normal.size(); i++){
    cout<<normal[i]<<" ";
}
normal.push_back(4);
cout<<"\nNormal vector push_back ";
for(int i=0; i<normal.size(); i++){
    cout<<normal[i]<<" ";
}
cout<<"\nNormal vector before reserve "<<normal.capacity()<<endl;
normal.reserve(20);
cout<<"Normal vector after reserve "<<normal.capacity()<<endl;
cout<<"Normal vector before erase "<<normal.size()<<endl;
normal.erase(normal.begin(), normal.end());
cout<<"Normal vector after erase "<<normal.size()<<endl;
}
void experimentalVectorTest(){
    Vector<int> experimental;
cout<<"Experimental vector results:"<<endl;

experimental.assign(3, 10);
cout<<"Experimental vector assign ";
for(int i=0; i<experimental.size(); i++){
    cout<<experimental[i]<<" ";
}
experimental.pop_back();
cout<<"\nExperimental vector pop_back ";
for(int i=0; i<experimental.size(); i++){
    cout<<experimental[i]<<" ";
}
experimental.push_back(4);
cout<<"\nExperimental vector push_back ";
for(int i=0; i<experimental.size(); i++){
    cout<<experimental[i]<<" ";
}
cout<<"\nExperimental vector before reserve "<<experimental.capacity()<<endl;
experimental.reserve(20);
cout<<"Experimental vector after reserve "<<experimental.capacity()<<endl;
cout<<"Experimental vector before erase "<<experimental.size()<<endl;
experimental.erase(experimental.begin(), experimental.end());
cout<<"Experimental vector after erase "<<experimental.size()<<endl;
}

void vectorEfektyvumoAnalize(){
    vector<int> normal;
    int sz=100000000;
    int count=0;
auto start = std::chrono::high_resolution_clock::now(); auto st=start;
for(int i=0; i<sz; i++){
    normal.push_back(i);
        if(normal.size()==normal.capacity()){
        count++;
    }
}
std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now()-start; // Skirtumas (s)
cout <<"efektyvumo spartos analize std::vector "<<sz<<" dydzio sekundemis: "<<diff.count()<<endl;
cout<<"pasiskirstymas "<<count<<endl;

}
void experimentalVectorEfektyvumoAnalize(){
        Vector<int> experimental;
    int sz=100000000;
    int count=0;
auto start = std::chrono::high_resolution_clock::now(); auto st=start;
for(int i=0; i<sz; i++){
    experimental.push_back(i);
    if(experimental.size()==experimental.capacity()){
        count++;
    }
}
std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now()-start; // Skirtumas (s)
cout <<"efektyvumo spartos analize Vector "<<sz<<" dydzio sekundemis: "<<diff.count()<<endl;
cout<<"pasiskirstymas "<<count<<endl;

}




int main(){
    vectorTest();
    experimentalVectorTest();
    vectorEfektyvumoAnalize();
    experimentalVectorEfektyvumoAnalize();


    return 0;
    
}