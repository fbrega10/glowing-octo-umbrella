#include <iostream>
using namespace std;


class Edge{
    private:
        int first;
        int second;
        inline static int counter = 0;

    public:
        Edge(int a, int b)
        {
            first = a;
            second = b;
            ++counter;
        }

        static int getCounter(){
            return counter;
        }
        
        int getFirst(){
            return first;
        }
        
        int getSecond(){
           return second; 
        }
};

int main(){
    cout << "Current counter : " << Edge::getCounter() << endl;
    Edge edge = Edge(4, 5);
    cout << "Current counter : " << Edge::getCounter() << endl;
    Edge edgeSecond = Edge(3, 4);
    cout << "Current counter : " << Edge::getCounter() << endl;
}