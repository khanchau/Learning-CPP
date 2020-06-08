#include <iostream>
#include <vector> 
using std::cout;
using std::cin;
using std::vector;

/* 
    Major Updates:
    6/7/20
        - Moving from arrays to vectors. Vectors are similar to arrays.
        They can be used to work with dynamic data. 
*/

/*
    Prints the contents of a vector with integers.
    @param vec: Vector being passed in to be printed out.
*/
void PrintVector(vector<int> &vec) {
    for(int i=0; i<vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
}

/*
    Iterates through a given array to see if contents
    add up to a specified target value.
    @param vec: Vector to search content of.
    @param target: integer value to check sums of vector contents against.
    @return: A vector containing the indices of the vector that add up to
             the target.
*/
vector<int> TwoSums(vector<int> &vec, int target) {
    vector<int> indices;
    //PrintVector(vec); // Sanity check - REMOVE LATER
    for(int i=0; i< vec.size(); i++){
        if(indices.size() == 2) {
            break;
        }
        for(int j=1; j <= vec.size(); j++) {
            if( (vec[i] + vec[j]) == target){
                indices.push_back(i);
                indices.push_back(j);
                break;
            }
        }
    }
    return indices;
}

int main() {
    int input;
    int target;
    vector<int> vec;
    vector<int> indices;
    while (input != -1) {
        cout << "Please enter a number: ";
        cin >> input;
        if(input != -1) {
            vec.push_back(input);
        }
    }

    cout << "Please enter a target number: ";
    cin >> target;

    indices = TwoSums(vec, target);
    cout << "Adding elements at index " << indices[0] << " and ";
    cout << indices[1] << " will yield the target of " << target << ".";
    return 0;
}