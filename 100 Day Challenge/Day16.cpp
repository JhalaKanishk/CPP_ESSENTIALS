#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout << "VECTORS : C++" << endl;
    //Vectors are Dynamic Arrays with the ability to resize itself automatically when an element is inserted or deleted, with thier storage being handled automatically by the container

    //iterators in vector
    vector<int> V;

    cout << "Enter the elements in Vector : " << endl;

    //input
    for(int i=1;i<=5;i++){
        V.push_back(i);
    }//entering :  1 2 3 4 5

    //output
    for(auto i=V.begin();i<V.end();i++){
        cout << *i << endl;
    }

    /*
    size() – Returns the number of elements in the vector.
    max_size() – Returns the maximum number of elements that the vector can hold.
    capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    resize(n) – Resizes the container so that it contains ‘n’ elements.
    empty() – Returns whether the container is empty.
    shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    reserve() – Requests that the vector capacity be at least enough to contain n elements.
    */

    cout << "Size :  " << V.size() << endl;
    cout << "Capacity : " << V.capacity() << endl;
    cout << "Max Size : " << V.max_size() << endl; 

    //resize
    V.resize(6);
    cout << "After resizing, size : " << V.size() << endl;
    cout << "After resizing, capacity : " << V.capacity() << endl;

    //check vector is empty or not
    if(V.empty() == false) {
        cout << "Vector is not empty" << endl;
    }
    else{
        cout << "Vector is empty" << endl;
    }


    vector<int> v2;

    for(int i=1;i<=5;i++){
        v2.push_back(i*10);
    }

    for(auto i=v2.begin();i<v2.end();i++){
        cout << *i << endl;
    }

    cout << "Indexing : " << v2.at(2) << endl;
    cout << "Front : " << v2.front() << endl;
    cout << "Back : " << v2.back() << endl;

    //Performing Swaaping Operation  

    cout << "Before Swapping" << endl;

    cout << "Vector 1 : " << endl;
    for(auto i=V.begin();i<V.end();i++){
        cout << *i << endl;
    }
    cout << "Vector 2 : " << endl;
    for(auto i=v2.begin();i<v2.end();i++){
        cout << *i << endl;
    }

    //Swap Function
    V.swap(v2);

    cout << "After Swapping" << endl;

    cout << "Vector 1 : " << endl;
    for(auto i=V.begin();i<V.end();i++){
        cout << *i << endl;
    }
    cout << "Vector 2 : " << endl;
    for(auto i=v2.begin();i<v2.end();i++){
        cout << *i << endl;
    }

    //std::pair
    //alow us to store pair of values or objects
    pair<int, int> p;
    p.first = 1;
    p.second = 2;
    //Q1 : Reduce the given array ?
    


    return 0;
}